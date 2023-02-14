#pragma once

class Singleton
{
protected:
	Singleton()
	{}

	static Singleton* m_singleton;
public:
	Singleton(Singleton& other) = delete;
	void operator=(const Singleton&) = delete;

	static Singleton* GetInstance();
};