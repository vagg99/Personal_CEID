%Question 2 - Don't Care
%General Info: https://www.youtube.com/watch?v=YkyGDQLC5yc
%~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
%~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

load chirp;                                % Load data (y and Fs) into workspace
yw = y + 0.5*rand(size(y));                 % Adding noise
h=firpm(34,[0 .45 .5 1],[0 0 1 1]);
freqz(b,1,512);                            % Frequency response of filter
yf = filtfilt(b,1,y);                     % Zero-phase digital filtering
n=length(y) -100 : length(y);
m=1:100;
plot(yf(m));
%figure;
%subplot(211); plot(y,'b'); title('Original Signal');
%subplot(212); plot(output,'g'); title('Filtered Signal');

