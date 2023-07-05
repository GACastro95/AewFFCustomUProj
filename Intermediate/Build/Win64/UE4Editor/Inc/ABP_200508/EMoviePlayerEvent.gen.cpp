// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMoviePlayerEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMoviePlayerEvent() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMoviePlayerEvent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMoviePlayerEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMoviePlayerEvent, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMoviePlayerEvent"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMoviePlayerEvent>()
	{
		return EMoviePlayerEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoviePlayerEvent(EMoviePlayerEvent_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMoviePlayerEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMoviePlayerEvent_Hash() { return 2483211079U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMoviePlayerEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoviePlayerEvent"), 0, Get_Z_Construct_UEnum_ABP_200508_EMoviePlayerEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoviePlayerEvent::Opened", (int64)EMoviePlayerEvent::Opened },
				{ "EMoviePlayerEvent::OpenFailed", (int64)EMoviePlayerEvent::OpenFailed },
				{ "EMoviePlayerEvent::Closed", (int64)EMoviePlayerEvent::Closed },
				{ "EMoviePlayerEvent::Prepared", (int64)EMoviePlayerEvent::Prepared },
				{ "EMoviePlayerEvent::Suspended", (int64)EMoviePlayerEvent::Suspended },
				{ "EMoviePlayerEvent::Resumed", (int64)EMoviePlayerEvent::Resumed },
				{ "EMoviePlayerEvent::Seeked", (int64)EMoviePlayerEvent::Seeked },
				{ "EMoviePlayerEvent::PlaybackEnd", (int64)EMoviePlayerEvent::PlaybackEnd },
				{ "EMoviePlayerEvent::TrackChanged", (int64)EMoviePlayerEvent::TrackChanged },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Closed.Name", "EMoviePlayerEvent::Closed" },
				{ "ModuleRelativePath", "Public/EMoviePlayerEvent.h" },
				{ "Opened.Name", "EMoviePlayerEvent::Opened" },
				{ "OpenFailed.Name", "EMoviePlayerEvent::OpenFailed" },
				{ "PlaybackEnd.Name", "EMoviePlayerEvent::PlaybackEnd" },
				{ "Prepared.Name", "EMoviePlayerEvent::Prepared" },
				{ "Resumed.Name", "EMoviePlayerEvent::Resumed" },
				{ "Seeked.Name", "EMoviePlayerEvent::Seeked" },
				{ "Suspended.Name", "EMoviePlayerEvent::Suspended" },
				{ "TrackChanged.Name", "EMoviePlayerEvent::TrackChanged" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMoviePlayerEvent",
				"EMoviePlayerEvent",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
