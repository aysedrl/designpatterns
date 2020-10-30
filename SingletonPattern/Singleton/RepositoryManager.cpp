
#include "RepositoryManager.h"

RepositoryManager * RepositoryManager::mInstance;

RepositoryManager::RepositoryManager(void):mTotalValue(0)
{
}


RepositoryManager::~RepositoryManager(void)
{
}

RepositoryManager * RepositoryManager::instance()
{
	if (!mInstance)
	{
		mInstance = new RepositoryManager();
	}
	return mInstance;

}

void RepositoryManager::destructInstanceSlot()
{
	if (mInstance)
	delete mInstance;
}

void RepositoryManager::setTotalValue(int pValue)
{
	mTotalValue = pValue;
}

int RepositoryManager::getTotalValue()
{
	return mTotalValue;
}
