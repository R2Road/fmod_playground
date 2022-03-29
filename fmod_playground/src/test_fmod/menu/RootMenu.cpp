#include "pch.h"
#include "RootMenu.h"

#include "base/r2_Director.h"
#include "base/r2_eTestResult.h"

#include "test_fmod/item/fmod_basic_test.h"
#include "test_fmod/item/fmod_load_test.h"
#include "test_fmod/item/fmod_play_test.h"
#include "test_fmod/item/fmod_effect_test.h"
#include "test_fmod/item/fmod_channel_group_test.h"
#include "test_fmod/item/fmod_sound_analysis_test.h"
#include "test_fmod/item/etc_test.h"

r2::MenuUp RootMenu::Create( r2::Director& director )
{
	r2::MenuUp ret( new ( std::nothrow ) r2::Menu(
		director
		, GetTitle()
		, "> Add Some One"
	) );

	{
		ret->AddChild( '1', fmod_basic_test::SystemCreateAndRelease::GetInstance() );
		ret->AddChild( '2', fmod_basic_test::VersionCheck::GetInstance() );


		ret->AddLineFeed();


		ret->AddChild( '3', fmod_load_test::Basic::GetInstance() );
		ret->AddChild( '4', fmod_play_test::PlaySound::GetInstance() );
		ret->AddChild( '5', fmod_play_test::PlayStream::GetInstance() );
		ret->AddChild( '6', fmod_play_test::PlayAndCallback::GetInstance() );
		ret->AddChild( '7', fmod_play_test::VolumeControl::GetInstance() );
		ret->AddChild( '8', fmod_play_test::PositionControl::GetInstance() );


		ret->AddLineFeed();


		ret->AddChild( '9', fmod_load_test::Memory::GetInstance() );


		ret->AddLineFeed();


		ret->AddChild( 'q', fmod_effect_test::Echo::GetInstance() );
		ret->AddChild( 'w', fmod_effect_test::Fade::GetInstance() );
		ret->AddChild( 'e', fmod_effect_test::FadeStartFadeEnd::GetInstance() );
		ret->AddChild( 'r', fmod_effect_test::PitchControl::GetInstance() );


		ret->AddLineFeed();


		ret->AddChild( 'a', fmod_channel_group_test::Basic::GetInstance() );
		ret->AddChild( 's', fmod_channel_group_test::Group::GetInstance() );
		ret->AddChild( 'd', fmod_channel_group_test::Volume::GetInstance() );


		ret->AddLineFeed();


		ret->AddChild( 'z', fmod_sound_analysis_test::Frequency::GetInstance() );


		ret->AddSplit();


		ret->AddChild( 32, etc_test::Test1::GetInstance() );


		ret->AddSplit();


		ret->AddChild(
			27
			, []()->const char* { return "Exit"; }
			, []()->r2::eTestResult { return r2::eTestResult::Exit; }
		);
	}

	return ret;
}