#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
	private:
		Base * left;
		Base * right;
	public:
		Div(Base* leftNode, Base* rightNode) : Base(){
			left = leftNode;
			right = rightNode;
		}
		double evaluate(){
			return left->evaluate()/right->evaluate();
		}
		std::string stringify(){
			return "(" + left->stringify() + "/" + right->stringify() + ")";
		}
};
#endif
