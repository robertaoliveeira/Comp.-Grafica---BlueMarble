
#include "Camera.h"

#include <glm/ext.hpp>

void SimpleCamera::MoveForward(float Scale)
{
	ForwardScale = Scale;
}

void SimpleCamera::MoveRight(float Scale)
{
	RightScale = Scale;
}


void SimpleCamera::Update(float DeltaTime)
{
	glm::vec3 Right = glm::cross(Direction, Up);

	Location += Direction * ForwardScale * DeltaTime;
	Location += Right * RightScale * DeltaTime;
}

glm::mat4 SimpleCamera::GetViewProjection()
{
	glm::mat4 View = glm::lookAt(Location, Location + Direction, Up);
	glm::mat4 Projection = glm::perspective(FieldOfView, AspectRatio, Near, Far);
	return Projection * View;
}