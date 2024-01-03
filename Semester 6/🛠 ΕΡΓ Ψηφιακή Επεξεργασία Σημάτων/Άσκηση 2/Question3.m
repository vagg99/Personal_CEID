load Noisy.mat
plot(abs(fft(yw)))
plot(abs(fftshift(yw)))
plot(20*log10(abs(fftshift(fft(yw,1024)))))
fft(yw, 1024)

%%notch Filters στο Google bandstop/Bandpass
filterDesigner

FS = filter(BP ,yw);
