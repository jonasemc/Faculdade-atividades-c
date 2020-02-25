float calcularQuantidadeDeCalor(float massa, float calorespecifico, float temperatura)
{
    float quantidadedecalor = massa * calorespecifico * temperatura;
    return quantidadedecalor;
}

float calcularDilatacao(float comprimentoinicial, float coeficientedilatacao, float temperatura)
{
    float dilatacao = comprimentoinicial * coeficientedilatacao * temperatura;
    return dilatacao;
}

float calcularEmpuxo(float densidade, float volume, float gravidade)
{
    float empuxo = densidade * volume * gravidade;
    return empuxo;
}

float calcularEnergia(float massa, float velocidadedaluz)
{   
    float energia = massa * (velocidadedaluz*velocidadedaluz);
    return energia;
}

float calcularForca(float massa, float aceleracao)
{       
    float forca = massa * aceleracao;
    return forca;
}

float calcularPotencia(float diferencadepotencial, float corrente)
{
    float potencia = diferencadepotencial * corrente;
    return potencia;
}

float calcularMRU(float espaco, float velocidade, float tempo)
{
    float MRU = espaco + (velocidade * tempo);
    return MRU;
}

float calcularTempo(float distancia, float velocidadeMedia)
{
    float tempo = distancia / velocidadeMedia;
    return tempo;
}

float calcularTrabalho(float forca, float deslocamento, float angulo)
{
    float trabalho = forca * deslocamento * angulo;
    return trabalho;
}

float calcularVelocidadeMedia(float distancia, float tempo)
{
    float velocidadeMedia = distancia / tempo;
    return velocidadeMedia;
}