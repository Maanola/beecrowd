#include <stdio.h>
 
int main() {
    int hrIni, minIni, hrFim, minFim, hr=0, min=0;
    
    scanf("%d", &hrIni);
    scanf("%d", &minIni);
    scanf("%d", &hrFim);
    scanf("%d", &minFim);
    
    hr = hrFim - hrIni;
    min = minFim - minIni;
    
    if(hr < 0)
        hr = (24 - hrIni) + hrFim;
    if(min < 0){
        min = (60 - minIni) + minFim;
        if(hr == 0)
            hr = 24;
        hr--;
    }
    if(hrIni == hrFim && minIni == minFim)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, min);

    return 0;
}
