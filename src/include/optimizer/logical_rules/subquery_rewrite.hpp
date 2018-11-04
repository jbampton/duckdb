//===----------------------------------------------------------------------===//
//
//                         DuckDB
//
// optimizer/logical_rules/subquery_rewrite.hpp
//
// Author: Hannes Mühleisen & Mark Raasveldt
//
//===----------------------------------------------------------------------===//

#pragma once

#include "optimizer/rule.hpp"

namespace duckdb {

class SubqueryRewritingRule : public Rule {
  public:
	SubqueryRewritingRule();

	std::unique_ptr<LogicalOperator>
	Apply(Rewriter &rewriter, LogicalOperator &op_root,
	      std::vector<AbstractOperator> &bindings, bool &fixed_point);

  private:
	std::unique_ptr<AbstractRuleNode> filter_rule;
};

} // namespace duckdb
