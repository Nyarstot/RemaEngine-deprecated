#include <Rema.h>

class NovelGame : public remaEngine::Engine
{
public:
	NovelGame()
	{

	}

	~NovelGame()
	{

	}
};

remaEngine::Engine* remaEngine::CreateApplication()
{
	return new NovelGame();
}