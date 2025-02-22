#pragma once




namespace Alpha
{
	class State
	{
	public:
		virtual void Init() = 0;

		virtual void HandleInput() = 0;
		virtual void Update() = 0;
		virtual void Draw() = 0;

		virtual void Pause() { }
		virtual void Resume() { }
	};
}