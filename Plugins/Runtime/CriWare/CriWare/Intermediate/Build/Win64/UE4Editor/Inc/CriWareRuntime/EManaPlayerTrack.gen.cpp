// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaPlayerTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaPlayerTrack() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EManaPlayerTrack_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaPlayerTrack"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlayerTrack>()
	{
		return EManaPlayerTrack_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManaPlayerTrack(EManaPlayerTrack_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EManaPlayerTrack"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Hash() { return 11512457U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManaPlayerTrack"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EManaPlayerTrack::Audio", (int64)EManaPlayerTrack::Audio },
				{ "EManaPlayerTrack::SubAudio", (int64)EManaPlayerTrack::SubAudio },
				{ "EManaPlayerTrack::ExtraAudio", (int64)EManaPlayerTrack::ExtraAudio },
				{ "EManaPlayerTrack::Subtitle", (int64)EManaPlayerTrack::Subtitle },
				{ "EManaPlayerTrack::Video", (int64)EManaPlayerTrack::Video },
				{ "EManaPlayerTrack::Alpha", (int64)EManaPlayerTrack::Alpha },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.Name", "EManaPlayerTrack::Alpha" },
				{ "Audio.Name", "EManaPlayerTrack::Audio" },
				{ "BlueprintType", "true" },
				{ "ExtraAudio.Name", "EManaPlayerTrack::ExtraAudio" },
				{ "ModuleRelativePath", "Public/EManaPlayerTrack.h" },
				{ "SubAudio.Name", "EManaPlayerTrack::SubAudio" },
				{ "Subtitle.Name", "EManaPlayerTrack::Subtitle" },
				{ "Video.Name", "EManaPlayerTrack::Video" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EManaPlayerTrack",
				"EManaPlayerTrack",
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
