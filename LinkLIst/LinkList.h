template <class T>
struct Node{
	T data;
	Node<T> *next;
};

template <class T>
class LinkList{
public:
	LinkList();
	void Insert(int i,T date);//ָ��λ������
	void Delete(int i);//ָ��λ��ɾ��
	int look_val(T x);//��ֵ����
	T look_key(int i);
	void Jose();//Լɪ������
	Node<T>* jose_f(int n,Node<T>* p);//Լɪ�򻷸�������
	void turn();//ת����ѭ������
	void PrintList();
	Node<T> * headNode();
private:
	Node<T> *head;
	Node<T> *rear;
	bool flag;//�Ƿ�ת����ѭ����Ĭ��Ϊfalse ������
};