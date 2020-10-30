#pragma once
/*Singleton pattern*/
class RepositoryManager
{
public:
	static RepositoryManager* instance();
	RepositoryManager(void);
	~RepositoryManager(void);
	void destructInstanceSlot();
	void setTotalValue(int);
	int getTotalValue();
private:
	static RepositoryManager * mInstance;
	int mTotalValue;
};

