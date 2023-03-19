function sampling_reconstruction(Ts,f0,initial_phase)

n  = 0:10/Ts;
x = sin(2*pi*f0*n*Ts+initial_phase);
plot(n,x)