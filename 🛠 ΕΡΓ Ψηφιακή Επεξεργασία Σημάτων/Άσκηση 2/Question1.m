%Second Exercise
%EXTRA INFO:https://www.allaboutcircuits.com/technical-articles
%/low-pass-filter-tutorial-basics-passive-RC-filter/
%~~~~~~~~~~~~~~~~~~
%Question 1
%~~~~~~~~~~~~~~~~~~
%~~~~~~~~~~~~~~~~~~
%%1 Fourier 
%low
%B = fir1(30,0.48, 'low')
%plot(abs(freqz((B))))

%high
%B = fir1(30,0.48, 'high')
%plot(abs(freqz((B))))

%%2 Don't Care
%lowpass
%h=firls(30,[0 .2 .3 1.0] ,[1 1 0 0]);
%plot(abs(freqz(h)))

%highpass
%h=firls(30,[0 .2 .3 1],[0 0 1 1],'h');
%plot(abs(freqz(h)))

%%3 Min - Max
%lowpass
%h=firpm(30,[0 0.2 0.3 1],[1 1 0 0]);
%plot(abs(freqz((h))))

%highpass
%h=firpm(30,[0 0.2 0.3 1],[0 0 1 1]); 
%plot(abs(freqz((h))))
