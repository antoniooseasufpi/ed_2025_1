### 🧪 **Exemplo 1 — Criando um TAD para representar uma lâmpada**

> **Objetivo**: Criar um TAD chamado `Lampada` que representa uma lâmpada simples com dois estados: ligada ou desligada.

#### 📝 Enunciado:

Implemente um TAD chamado `Lampada` com as seguintes características:

1. O tipo `Lampada` deve ser **opaco** (não exponha os campos da `struct` no `.h`).
2. O TAD deve conter as seguintes funções públicas:

   ```c
   Lampada* criar_lampada(void);
   void ligar(Lampada* l);
   void desligar(Lampada* l);
   void estado(Lampada* l); // imprime "Ligada" ou "Desligada"
   void destruir_lampada(Lampada* l);
   ```

3. No `main.c`, crie uma lâmpada, ligue-a, mostre seu estado, desligue-a e mostre novamente.

4. Organize seu código em:
   /TAD_lampada
      ├──`lampada.h`
      ├──`lampada.c`
      ├──`main.c`

## 🧪 **Exemplo 2 (reformulado com TAD)** — TAD para Temperaturas Semanais

> **Objetivo**: Criar um TAD chamado `SemanaTemperaturas` para armazenar e manipular as temperaturas médias dos 7 dias de uma semana.

---

### 📝 Enunciado:

Implemente um TAD chamado `SemanaTemperaturas`, responsável por armazenar as temperaturas de 7 dias e calcular estatísticas básicas.

#### ✅ Requisitos:

1. A `struct` deve ser **opaca**: defina o tipo `SemanaTemperaturas` como incompleto no `.h`, com implementação no `.c`.
2. Implemente as seguintes funções no TAD:

```c
SemanaTemperaturas* criar_semana(void);
void ler_temperaturas(SemanaTemperaturas* s);
float calcular_media(SemanaTemperaturas* s);
void mostrar_acima_da_media(SemanaTemperaturas* s, float media);
void liberar_semana(SemanaTemperaturas* s);
```

3. No `main.c`, crie um objeto do tipo `SemanaTemperaturas`, chame as funções acima na ordem correta e mostre os resultados.

---

4. Organize seu código em:
   /semana_temperaturas
      ├── semana.h          // interface do TAD
      ├── semana.c          // implementação do TAD
      └── main.c            // uso do TAD
