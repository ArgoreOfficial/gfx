#ifndef _ARG_GFX_BUFFER_H
#define _ARG_GFX_BUFFER_H

#include <gfx/gfx_types.h>

typedef enum ArgGfxBufferType
{
	ARG_GFX_BUFFER_TYPE_NONE = 0,
	ARG_GFX_BUFFER_TYPE_INDEX,
	ARG_GFX_BUFFER_TYPE_VERTEX,
	ARG_GFX_BUFFER_TYPE_UNIFORM,
	ARG_GFX_BUFFER_TYPE_DYNAMIC
} ArgGfxBufferType;

typedef enum ArgGfxBufferUsage
{
	ARG_GFX_BUFFER_USAGE_NONE = 0,
	ARG_GFX_BUFFER_USAGE_STATIC_DRAW,
	ARG_GFX_BUFFER_USAGE_DYNAMIC_DRAW
} ArgGfxBufferUsage;

typedef struct ArgGfxBufferDesc
{
	ArgGfxBufferType type;
	ArgGfxBufferUsage usage;
	int32_t size;
};

typedef struct ArgGfxBufferObject
{
	ArgHandle handle;

	ArgGfxBufferType type;
	ArgGfxBufferUsage usage;

	uint32_t count;
	uint32_t stride;
	int32_t  size;

	ArgHandle blockIndex;
	bufferBindingIndex_t bindingIndex;

	void* pPlatformData;
};

#endif