// Lean compiler output
// Module: Init.Lean.Meta.Error
// Imports: Init.Lean.Meta.Basic
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Meta_Exception_toMessageData___closed__12;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__58;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__51;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__39;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__35;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__36;
lean_object* l_Lean_Meta_Exception_toMessageData(lean_object*);
lean_object* l_Lean_Meta_Exception_toMessageData___closed__31;
lean_object* l_Lean_mkMVar(lean_object*);
extern lean_object* l_Lean_Format_flatten___main___closed__1;
lean_object* l_Lean_MessageData_arrayExpr_toMessageData___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Exception_toMessageData___closed__43;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__26;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__40;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__9;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__27;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__45;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__8;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__17;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__23;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__57;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__4;
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Exception_toMessageData___closed__48;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__34;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__11;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__19;
extern lean_object* l_Lean_MessageData_coeOfArrayExpr___closed__2;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__44;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Exception_toStr___closed__11;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__2;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__47;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__33;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__46;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__6;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__25;
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_Exception_toMessageData___closed__3;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__53;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__55;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__37;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__42;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__22;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__50;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__38;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__21;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__41;
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Exception_toMessageData___closed__13;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__52;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__54;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__29;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__10;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__32;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__7;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__49;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__24;
lean_object* l_Lean_Meta_Exception_mkCtx(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Exception_toMessageData___closed__18;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__30;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__5;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__14;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__28;
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Exception_toMessageData___closed__15;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__16;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__56;
lean_object* l_Lean_Meta_Exception_toMessageData___closed__20;
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown constant ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown free variable ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown metavariable ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown universe level metavariable ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__10;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected bound variable ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__13;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__14;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("function expected ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__16;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__17;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type expected ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__19;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__20;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("incorrect number of universe levels ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__22;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__23;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid projection ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__25;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__26;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toStr___closed__11;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__28;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tried to update read only metavariable ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__30;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__31;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("stuck at ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__33;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__34;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__36() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" =?= ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__36;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__37;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__39() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("letTypeMismatch");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Exception_toMessageData___closed__39;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__40;
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Format_flatten___main___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__41;
x_2 = l_Lean_Meta_Exception_toMessageData___closed__42;
x_3 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__44() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("application type mismatch ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__44;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__45;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__47() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("not a type class instance ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__47;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__48;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__50() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("application builder failure ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__50;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__51;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__53() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to synthesize ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__53;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__55() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__54;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__56() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("internal bug");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__56;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_Exception_toMessageData___closed__58() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toMessageData___closed__57;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Exception_toMessageData(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_4, 0, x_2);
x_5 = l_Lean_Meta_Exception_toMessageData___closed__3;
x_6 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = l_Lean_Meta_Exception_mkCtx(x_3, x_6);
lean_dec(x_3);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = l_Lean_Meta_Exception_toMessageData___closed__6;
x_12 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_Meta_Exception_mkCtx(x_9, x_12);
lean_dec(x_9);
return x_13;
}
case 2:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = l_Lean_Meta_Exception_toMessageData___closed__9;
x_18 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_Meta_Exception_mkCtx(x_15, x_18);
lean_dec(x_15);
return x_19;
}
case 3:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_22, 0, x_20);
x_23 = l_Lean_Meta_Exception_toMessageData___closed__12;
x_24 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_Meta_Exception_mkCtx(x_21, x_24);
lean_dec(x_21);
return x_25;
}
case 4:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
lean_dec(x_1);
x_27 = l_Lean_mkBVar(x_26);
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_Lean_Meta_Exception_toMessageData___closed__15;
x_30 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
case 5:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 2);
lean_inc(x_33);
lean_dec(x_1);
x_34 = l_Lean_mkApp(x_31, x_32);
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = l_Lean_Meta_Exception_toMessageData___closed__18;
x_37 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_Lean_Meta_Exception_mkCtx(x_33, x_37);
lean_dec(x_33);
return x_38;
}
case 6:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_1, 1);
lean_inc(x_40);
lean_dec(x_1);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = l_Lean_Meta_Exception_toMessageData___closed__21;
x_43 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_Lean_Meta_Exception_mkCtx(x_40, x_43);
lean_dec(x_40);
return x_44;
}
case 7:
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_1, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_1, 2);
lean_inc(x_47);
lean_dec(x_1);
x_48 = l_Lean_mkConst(x_45, x_46);
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = l_Lean_Meta_Exception_toMessageData___closed__24;
x_51 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = l_Lean_Meta_Exception_mkCtx(x_47, x_51);
lean_dec(x_47);
return x_52;
}
case 8:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_53 = lean_ctor_get(x_1, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_1, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 2);
lean_inc(x_55);
x_56 = lean_ctor_get(x_1, 3);
lean_inc(x_56);
lean_dec(x_1);
x_57 = l_Lean_mkProj(x_53, x_54, x_55);
x_58 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = l_Lean_Meta_Exception_toMessageData___closed__27;
x_60 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = l_Lean_Meta_Exception_mkCtx(x_56, x_60);
lean_dec(x_56);
return x_61;
}
case 9:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_1, 2);
lean_inc(x_62);
lean_dec(x_1);
x_63 = l_Lean_Meta_Exception_toMessageData___closed__29;
x_64 = l_Lean_Meta_Exception_mkCtx(x_62, x_63);
lean_dec(x_62);
return x_64;
}
case 10:
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_65 = lean_ctor_get(x_1, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_1, 1);
lean_inc(x_66);
lean_dec(x_1);
x_67 = l_Lean_mkMVar(x_65);
x_68 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_69 = l_Lean_Meta_Exception_toMessageData___closed__32;
x_70 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = l_Lean_Meta_Exception_mkCtx(x_66, x_70);
lean_dec(x_66);
return x_71;
}
case 11:
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_72 = lean_ctor_get(x_1, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_1, 1);
lean_inc(x_73);
x_74 = lean_ctor_get(x_1, 2);
lean_inc(x_74);
lean_dec(x_1);
x_75 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_75, 0, x_72);
x_76 = l_Lean_Meta_Exception_toMessageData___closed__35;
x_77 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l_Lean_Meta_Exception_toMessageData___closed__38;
x_79 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_80, 0, x_73);
x_81 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Lean_Meta_Exception_mkCtx(x_74, x_81);
lean_dec(x_74);
return x_82;
}
case 12:
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_83 = lean_ctor_get(x_1, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_1, 1);
lean_inc(x_84);
x_85 = lean_ctor_get(x_1, 2);
lean_inc(x_85);
lean_dec(x_1);
x_86 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_86, 0, x_83);
x_87 = l_Lean_Meta_Exception_toMessageData___closed__35;
x_88 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
x_89 = l_Lean_Meta_Exception_toMessageData___closed__38;
x_90 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_91, 0, x_84);
x_92 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
x_93 = l_Lean_Meta_Exception_mkCtx(x_85, x_92);
lean_dec(x_85);
return x_93;
}
case 13:
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_94 = lean_ctor_get(x_1, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_1, 1);
lean_inc(x_95);
lean_dec(x_1);
x_96 = l_Lean_mkFVar(x_94);
x_97 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_97, 0, x_96);
x_98 = l_Lean_Meta_Exception_toMessageData___closed__43;
x_99 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = l_Lean_Meta_Exception_mkCtx(x_95, x_99);
lean_dec(x_95);
return x_100;
}
case 14:
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_101 = lean_ctor_get(x_1, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_1, 1);
lean_inc(x_102);
x_103 = lean_ctor_get(x_1, 2);
lean_inc(x_103);
lean_dec(x_1);
x_104 = l_Lean_mkApp(x_101, x_102);
x_105 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_105, 0, x_104);
x_106 = l_Lean_Meta_Exception_toMessageData___closed__46;
x_107 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
x_108 = l_Lean_Meta_Exception_mkCtx(x_103, x_107);
lean_dec(x_103);
return x_108;
}
case 15:
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_109 = lean_ctor_get(x_1, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_1, 1);
lean_inc(x_110);
lean_dec(x_1);
x_111 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_111, 0, x_109);
x_112 = l_Lean_Meta_Exception_toMessageData___closed__49;
x_113 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
x_114 = l_Lean_Meta_Exception_mkCtx(x_110, x_113);
lean_dec(x_110);
return x_114;
}
case 16:
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_115 = lean_ctor_get(x_1, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_1, 1);
lean_inc(x_116);
x_117 = lean_ctor_get(x_1, 2);
lean_inc(x_117);
x_118 = lean_ctor_get(x_1, 3);
lean_inc(x_118);
lean_dec(x_1);
x_119 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_119, 0, x_115);
x_120 = l_Lean_Meta_Exception_toMessageData___closed__52;
x_121 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = l_Lean_Meta_Exception_toMessageData___closed__42;
x_123 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_unsigned_to_nat(0u);
x_125 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_126 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_117, x_124, x_125);
lean_dec(x_117);
x_127 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_127, 0, x_123);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_122);
x_129 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_129, 0, x_116);
x_130 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_130, 0, x_129);
x_131 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_131, 0, x_128);
lean_ctor_set(x_131, 1, x_130);
x_132 = l_Lean_Meta_Exception_mkCtx(x_118, x_131);
lean_dec(x_118);
return x_132;
}
case 17:
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_133 = lean_ctor_get(x_1, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_1, 1);
lean_inc(x_134);
lean_dec(x_1);
x_135 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_135, 0, x_133);
x_136 = l_Lean_Meta_Exception_toMessageData___closed__55;
x_137 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
x_138 = l_Lean_Meta_Exception_mkCtx(x_134, x_137);
lean_dec(x_134);
return x_138;
}
case 18:
{
lean_object* x_139; 
lean_dec(x_1);
x_139 = l_Lean_Meta_Exception_toMessageData___closed__58;
return x_139;
}
default: 
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_1, 0);
lean_inc(x_140);
lean_dec(x_1);
x_141 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_141, 0, x_140);
x_142 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_142, 0, x_141);
return x_142;
}
}
}
}
lean_object* initialize_Init_Lean_Meta_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Meta_Error(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Exception_toMessageData___closed__1 = _init_l_Lean_Meta_Exception_toMessageData___closed__1();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__1);
l_Lean_Meta_Exception_toMessageData___closed__2 = _init_l_Lean_Meta_Exception_toMessageData___closed__2();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__2);
l_Lean_Meta_Exception_toMessageData___closed__3 = _init_l_Lean_Meta_Exception_toMessageData___closed__3();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__3);
l_Lean_Meta_Exception_toMessageData___closed__4 = _init_l_Lean_Meta_Exception_toMessageData___closed__4();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__4);
l_Lean_Meta_Exception_toMessageData___closed__5 = _init_l_Lean_Meta_Exception_toMessageData___closed__5();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__5);
l_Lean_Meta_Exception_toMessageData___closed__6 = _init_l_Lean_Meta_Exception_toMessageData___closed__6();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__6);
l_Lean_Meta_Exception_toMessageData___closed__7 = _init_l_Lean_Meta_Exception_toMessageData___closed__7();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__7);
l_Lean_Meta_Exception_toMessageData___closed__8 = _init_l_Lean_Meta_Exception_toMessageData___closed__8();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__8);
l_Lean_Meta_Exception_toMessageData___closed__9 = _init_l_Lean_Meta_Exception_toMessageData___closed__9();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__9);
l_Lean_Meta_Exception_toMessageData___closed__10 = _init_l_Lean_Meta_Exception_toMessageData___closed__10();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__10);
l_Lean_Meta_Exception_toMessageData___closed__11 = _init_l_Lean_Meta_Exception_toMessageData___closed__11();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__11);
l_Lean_Meta_Exception_toMessageData___closed__12 = _init_l_Lean_Meta_Exception_toMessageData___closed__12();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__12);
l_Lean_Meta_Exception_toMessageData___closed__13 = _init_l_Lean_Meta_Exception_toMessageData___closed__13();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__13);
l_Lean_Meta_Exception_toMessageData___closed__14 = _init_l_Lean_Meta_Exception_toMessageData___closed__14();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__14);
l_Lean_Meta_Exception_toMessageData___closed__15 = _init_l_Lean_Meta_Exception_toMessageData___closed__15();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__15);
l_Lean_Meta_Exception_toMessageData___closed__16 = _init_l_Lean_Meta_Exception_toMessageData___closed__16();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__16);
l_Lean_Meta_Exception_toMessageData___closed__17 = _init_l_Lean_Meta_Exception_toMessageData___closed__17();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__17);
l_Lean_Meta_Exception_toMessageData___closed__18 = _init_l_Lean_Meta_Exception_toMessageData___closed__18();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__18);
l_Lean_Meta_Exception_toMessageData___closed__19 = _init_l_Lean_Meta_Exception_toMessageData___closed__19();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__19);
l_Lean_Meta_Exception_toMessageData___closed__20 = _init_l_Lean_Meta_Exception_toMessageData___closed__20();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__20);
l_Lean_Meta_Exception_toMessageData___closed__21 = _init_l_Lean_Meta_Exception_toMessageData___closed__21();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__21);
l_Lean_Meta_Exception_toMessageData___closed__22 = _init_l_Lean_Meta_Exception_toMessageData___closed__22();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__22);
l_Lean_Meta_Exception_toMessageData___closed__23 = _init_l_Lean_Meta_Exception_toMessageData___closed__23();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__23);
l_Lean_Meta_Exception_toMessageData___closed__24 = _init_l_Lean_Meta_Exception_toMessageData___closed__24();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__24);
l_Lean_Meta_Exception_toMessageData___closed__25 = _init_l_Lean_Meta_Exception_toMessageData___closed__25();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__25);
l_Lean_Meta_Exception_toMessageData___closed__26 = _init_l_Lean_Meta_Exception_toMessageData___closed__26();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__26);
l_Lean_Meta_Exception_toMessageData___closed__27 = _init_l_Lean_Meta_Exception_toMessageData___closed__27();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__27);
l_Lean_Meta_Exception_toMessageData___closed__28 = _init_l_Lean_Meta_Exception_toMessageData___closed__28();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__28);
l_Lean_Meta_Exception_toMessageData___closed__29 = _init_l_Lean_Meta_Exception_toMessageData___closed__29();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__29);
l_Lean_Meta_Exception_toMessageData___closed__30 = _init_l_Lean_Meta_Exception_toMessageData___closed__30();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__30);
l_Lean_Meta_Exception_toMessageData___closed__31 = _init_l_Lean_Meta_Exception_toMessageData___closed__31();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__31);
l_Lean_Meta_Exception_toMessageData___closed__32 = _init_l_Lean_Meta_Exception_toMessageData___closed__32();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__32);
l_Lean_Meta_Exception_toMessageData___closed__33 = _init_l_Lean_Meta_Exception_toMessageData___closed__33();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__33);
l_Lean_Meta_Exception_toMessageData___closed__34 = _init_l_Lean_Meta_Exception_toMessageData___closed__34();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__34);
l_Lean_Meta_Exception_toMessageData___closed__35 = _init_l_Lean_Meta_Exception_toMessageData___closed__35();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__35);
l_Lean_Meta_Exception_toMessageData___closed__36 = _init_l_Lean_Meta_Exception_toMessageData___closed__36();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__36);
l_Lean_Meta_Exception_toMessageData___closed__37 = _init_l_Lean_Meta_Exception_toMessageData___closed__37();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__37);
l_Lean_Meta_Exception_toMessageData___closed__38 = _init_l_Lean_Meta_Exception_toMessageData___closed__38();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__38);
l_Lean_Meta_Exception_toMessageData___closed__39 = _init_l_Lean_Meta_Exception_toMessageData___closed__39();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__39);
l_Lean_Meta_Exception_toMessageData___closed__40 = _init_l_Lean_Meta_Exception_toMessageData___closed__40();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__40);
l_Lean_Meta_Exception_toMessageData___closed__41 = _init_l_Lean_Meta_Exception_toMessageData___closed__41();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__41);
l_Lean_Meta_Exception_toMessageData___closed__42 = _init_l_Lean_Meta_Exception_toMessageData___closed__42();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__42);
l_Lean_Meta_Exception_toMessageData___closed__43 = _init_l_Lean_Meta_Exception_toMessageData___closed__43();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__43);
l_Lean_Meta_Exception_toMessageData___closed__44 = _init_l_Lean_Meta_Exception_toMessageData___closed__44();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__44);
l_Lean_Meta_Exception_toMessageData___closed__45 = _init_l_Lean_Meta_Exception_toMessageData___closed__45();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__45);
l_Lean_Meta_Exception_toMessageData___closed__46 = _init_l_Lean_Meta_Exception_toMessageData___closed__46();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__46);
l_Lean_Meta_Exception_toMessageData___closed__47 = _init_l_Lean_Meta_Exception_toMessageData___closed__47();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__47);
l_Lean_Meta_Exception_toMessageData___closed__48 = _init_l_Lean_Meta_Exception_toMessageData___closed__48();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__48);
l_Lean_Meta_Exception_toMessageData___closed__49 = _init_l_Lean_Meta_Exception_toMessageData___closed__49();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__49);
l_Lean_Meta_Exception_toMessageData___closed__50 = _init_l_Lean_Meta_Exception_toMessageData___closed__50();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__50);
l_Lean_Meta_Exception_toMessageData___closed__51 = _init_l_Lean_Meta_Exception_toMessageData___closed__51();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__51);
l_Lean_Meta_Exception_toMessageData___closed__52 = _init_l_Lean_Meta_Exception_toMessageData___closed__52();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__52);
l_Lean_Meta_Exception_toMessageData___closed__53 = _init_l_Lean_Meta_Exception_toMessageData___closed__53();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__53);
l_Lean_Meta_Exception_toMessageData___closed__54 = _init_l_Lean_Meta_Exception_toMessageData___closed__54();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__54);
l_Lean_Meta_Exception_toMessageData___closed__55 = _init_l_Lean_Meta_Exception_toMessageData___closed__55();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__55);
l_Lean_Meta_Exception_toMessageData___closed__56 = _init_l_Lean_Meta_Exception_toMessageData___closed__56();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__56);
l_Lean_Meta_Exception_toMessageData___closed__57 = _init_l_Lean_Meta_Exception_toMessageData___closed__57();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__57);
l_Lean_Meta_Exception_toMessageData___closed__58 = _init_l_Lean_Meta_Exception_toMessageData___closed__58();
lean_mark_persistent(l_Lean_Meta_Exception_toMessageData___closed__58);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif