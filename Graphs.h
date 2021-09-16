int ocupado[64] = {0};
int grafo[64][4];;
int perder = 0;
bool agarrar = false;
void llenar(){
  for(int i=0;i<64;i++){
    grafo[i][0] = -12; grafo[i][1] = -12;
    grafo[i][2] = -12; grafo[i][3] = -12;
    if(((i+1) > 0) && ((i+1) < 64)){grafo[i][0] = i+1;}
  if(((i-1) > 0) && ((i-1) < 64)){grafo[i][1] = i-1;}
  if(((i+8) > 0) && ((i+8) < 64)){grafo[i][2] = i+8;}
  if(((i-8) > 0) && ((i-8) < 64)){grafo[i][3] = i-8;}  }
}
void search(int grafo[64][4], int pos, int comp){
  int u = 0;
  for(u=0;u<4;u++){
    if(grafo[pos][u] == comp){
      if(ocupado[comp] == 1){
        perder = 1;return;
      }
      else{
      if(ocupado[comp] == 2){agarrar = true;}
      ocupado[pos] = 0;
      ocupado[comp] = 1;return;}}}}
