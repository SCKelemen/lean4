import Init.Lean

open Lean
open Lean.Parser
open Lean.Elab
open Lean.Elab.Command

abbrev Set (α : Type) := α → Prop
axiom setOf {α : Type} : (α → Prop) → Set α
axiom mem {α : Type} : α → Set α → Prop
axiom univ {α : Type} : Set α
axiom Union {α : Type} : Set (Set α) → Set α

namespace Lean.Parser.Term
@[termParser] def mem := tparser! infixL " ∈ " 100
end Lean.Parser.Term
namespace Lean.Elab.Term
@[termElab mem] def elabMem : TermElab := elabInfixOp `mem
end Lean.Elab.Term


new_frontend
open Lean.Parser

syntax "{" term " | " term "}" : term

-- set_option trace.Elab true
-- set_option syntaxMaxDepth 6

macro
| `({$x ∈ $s | $p}) => `(setOf (fun $x => $x ∈ $s ∧ $p))
| `({$x ≤ $e | $p}) => `(setOf (fun $x => $x ≤ $e ∧ $p))
| `({$b      | $r}) => `(setOf (fun $b => $r))

syntax "⋃ " term ", " term : term

macro | `(⋃ $b, $r) => `(Union {$b | $r})

#check ⋃ x,              x = x
#check ⋃ (x : Set Unit), x = x
#check ⋃ x ∈ univ,       x = x

syntax "#check2" term : command

macro | `(#check2 $e) => `(#check $e #check $e)

#check2 1