/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <utility>
#include "kernel/environment.h"

namespace lean {
/** \brief Add the alias \c a for \c e. */
environment add_expr_alias(environment const & env, name const & a, name const & e, bool overwrite = false);
/**
   \brief Add alias \c a for \c e, and also add it to all parent scopes
   until in a namespace scope.
*/
environment add_expr_alias_rec(environment const & env, name const & a, name const & e, bool overwrite = false);

/** \brief If \c t is aliased in \c env, then return its name. Otherwise, return none. */
optional<name> is_expr_aliased(environment const & env, name const & t);

/** \brief Return expressions associated with the given alias. */
names get_expr_aliases(environment const & env, name const & n);

/** \brief Remove aliases for `n`, the effect affects the current scope only. */
environment erase_expr_aliases(environment const & env, name const & n);

/**
   \brief Create an alias for each declaration named <tt>prefix.rest</tt>.
   The alias for <tt>prefix.rest</tt> is <tt>new_prefix.rest</tt>.

   \remark \c new_prefix may be the anonymous name.
*/
environment add_aliases(environment const & env, name const & prefix, name const & new_prefix,
                        unsigned num_exceptions = 0, name const * exceptions = nullptr, bool overwrite = false);
inline environment overwrite_aliases(environment const & env, name const & prefix, name const & new_prefix) {
    return add_aliases(env, prefix, new_prefix, 0, nullptr, true);
}

bool is_exception(name const & n, name const & prefix, unsigned num_exceptions, name const * exceptions);

void for_each_expr_alias(environment const & env, std::function<void(name const &, names const &)> const & fn);

void initialize_aliases();
void finalize_aliases();
}
