#IFNDEF __C3_VANILLA_OPTION_HPP
#DEFINE __C3_VANILLA_OPTION_HPP

class VanillaOption {

private:
  void init();    // Initialises the member data
  void copy(const VanillaOption& rhs);   // Provides a copy of member data

  // Member data is kept private
  double K;      // Strike price
  double r;      // Risk-free rate
  double T;      // Maturity time
  double S;      // Underlying asset price
  double sigma;  // Volatility of underlying asset

public:
  // Class constructors, assignment operator and destructor
  VanillaOption();    // Default constructor - has no parameters
  VanillaOption(const double& _K, const double& _r, const double& _T, const double& _S, const double& _sigma);     // Parameter constructor
  VanillaOption(const VanillaOption& rhs);  // Copy constructor  
  VanillaOption& operator=(const VanillaOption& rhs);  // Assignment operator
  virtual ~VanillaOption();  // Destructor is virtual, good practice for inheritance

  // Selector ("getter") methods for our option parameters
  double getK() const;
  double getr() const;
  double getT() const;
  double getS() const;
  double getsigma() const;

  // Calculation ("selector") methods for call/put pricing
  double calc_call_price() const;
  double calc_put_price() const;
};

#ENDIF
