# include  <iostream> _ _

usando  namespace  std ;

struct  Lista {
    int senha;
    Lista* a seguir;
};

Lista* senhasGeradas = NULL ;
Lista* senhasAtendidas = NULL ;
int proximaSenha = 1 ;

void  gerarSenha ()
{
    Lista* novoNo = nova Lista;
    novoNo-> senha = proximaSenha++;
    novoNo-> pr�ximo = NULL ;

    if (senhasGeradas == NULL ) {
        senhasGeradas = novoNo;
    } sen�o {
        Lista* atual = senhasGeradas;
        while (atual-> next != NULL ) {
            atual = atual-> proximo ;
        }
        atual-> proximo = novoNo;
    }
}

void  realizarAtendimento ()
{
    if (senhasGeradas != NULL ) {
        Lista* noRemover = senhasGeradas;
        senhasGeradas = senhasGeradas-> next ;

        noRemover-> next = NULL ;

        if (senhasAtendidas == NULL ) {
            senhasAtendidas = noRemover;
        } sen�o {
            Lista* atual = senhasAtendidas;
            while (atual-> next != NULL ) {
                atual = atual-> proximo ;
            }
            atual-> pr�ximo = noRemover;
        }

        cout << " Senha atendida: " << noRemover-> senha << endl;
    } sen�o {
        cout << " N�o h� senhas aguardando atendimento. " << endl;
    }
}

void  liberarMemoria (Lista* no)
{
    if (n�o == NULL ) {
        retorno ;
    }

    liberarMemoria (no-> next );
    excluir n�o;
}

void  liberarLista ()
{
    liberarMemoria (senhasGeradas);
    liberarMemoria (senhasAtendidas);
}

int  principal ()
{
    int op��o = - 1 ;

    while (senhasGeradas != NULL || opcao != 0 )
    {
        cout << " Quantidade de senhas aguardando atendimento: " ;

        contagem int = 0 ;
        Lista* atual = senhasGeradas;
        while (atual != NULL ) {
            atual = atual-> proximo ;
            contar++;
        }
        cout << contagem << endl;

        cout << " Selecione uma op��o: " << endl;
        cout << " 0. Sair " << endl;
        cout << " 1. Gerar senha " << endl;
        cout << " 2. Realizar atendimento " << endl;
        cin >> op��o;

        switch (op��o)
        {
            caso  0 :
                if (senhasGeradas != NULL )
                {
                    cout << " Ainda h� senhas aguardando atendimento. " << endl;
                    cout << " Quantidade de senhas atendidas: " ;

                    contagem = 0 ;
                    atual = senhasAtendidas;
                    while (atual != NULL ) {
                        atual = atual-> proximo ;
                        contar++;
                    }
                    cout << contagem << endl;
                }
                outro
                {
                    cout << " Encerrando o programa. " << endl;
                    cout << " Quantidade de senhas atendidas: " ;

                    contagem = 0 ;
                    atual = senhasAtendidas;
                    while (atual != NULL ) {
                        atual = atual-> proximo ;
                        contar++;
                    }
                    cout << contagem << endl;
                }
                quebrar ;
            caso  1 :
                gerarSenha ();
                quebrar ;
            caso  2 :
                realizarAtendimento ();
                quebrar ;
            padr�o :
                cout << " Op��o inv�lida. Por favor, selecione novamente. " << endl;
                quebrar ;
        }

        cout << endl;
    }

    liberarLista ();

    retorna  0 ;
}