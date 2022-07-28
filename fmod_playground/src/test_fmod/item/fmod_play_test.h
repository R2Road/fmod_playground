#pragma once

#include "r2cm/r2cm_iItem.h"
#include "r2cm/r2cm_Singleton.h"

namespace fmod_play_test
{
	class PlaySound : public r2cm::iItem, public r2cm::SingleTon<PlaySound>
	{
	public:
		TitleFunctionT GetTitleFunction() const override;
		DoFunctionT GetDoFunction() override;
	};

	class PlayStream: public r2cm::iItem, public r2cm::SingleTon<PlayStream>
	{
	public:
		TitleFunctionT GetTitleFunction() const override;
		DoFunctionT GetDoFunction() override;
	};

	class PlayAndCallback: public r2cm::iItem, public r2cm::SingleTon<PlayAndCallback>
	{
	public:
		TitleFunctionT GetTitleFunction() const override;
		DoFunctionT GetDoFunction() override;
	};

	class VolumeControl : public r2cm::iItem, public r2cm::SingleTon<VolumeControl>
	{
	public:
		TitleFunctionT GetTitleFunction() const override;
		DoFunctionT GetDoFunction() override;
	};

	class PositionControl : public r2cm::iItem, public r2cm::SingleTon<PositionControl>
	{
	public:
		TitleFunctionT GetTitleFunction() const override;
		DoFunctionT GetDoFunction() override;
	};
}