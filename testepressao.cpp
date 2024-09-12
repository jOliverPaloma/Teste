#include <iostream>
#include <cmath>

//inicialização das variaveis.

double V, P, Pc, Tc, omega, T, R = 8.314; //J/K/mol
double disc, OMEGA;
double epsilon,sigma,alpha,psi,zeta;

int main ()
{


 // {tc 304.20,  pc 73.83e5, omega 0.2240}, {"CARBON-DIOXIDE", "CO2"}
 // Read PC,TC,omega
  auto Pc = 7286.45*101325;
  auto Tc = 304.20;
  auto omega = 0.2240; 

auto b =2;
 // criar loop para V
  T = 280.;


  for (double V = 50; V <= 2000; V += 10) {
   
  auto Tr = T/Tc;


////////////VDW////////////////

  sigma = 0.;
  epsilon = 0.;
  OMEGA = 1./8.;
  psi = 27./64.;
  zeta = 3./8.;
  alpha = 1.;


  auto bb = OMEGA*(R*Tc)/Pc;
  auto aa = psi*((alpha*(R*R)*(Tc*Tc))/Pc);


  // Formula para 
  P = (((R*T)/V-bb) - aa/(V+epsilon*bb)*(V+sigma*bb));

  std::cout << V << "  " << P << std::endl;

    }


}
