class DecimalOpMock: public Base{
	public:
		DecimalOpMock(){}
		virtual double evalue(){ return 4.6231; }
		virtual string stringify(){ return "4.6231"; }
};
