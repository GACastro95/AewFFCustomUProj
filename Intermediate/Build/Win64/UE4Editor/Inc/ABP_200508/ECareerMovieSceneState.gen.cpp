// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerMovieSceneState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerMovieSceneState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMovieSceneState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerMovieSceneState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerMovieSceneState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerMovieSceneState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerMovieSceneState>()
	{
		return ECareerMovieSceneState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerMovieSceneState(ECareerMovieSceneState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerMovieSceneState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerMovieSceneState_Hash() { return 812407685U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerMovieSceneState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerMovieSceneState"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerMovieSceneState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerMovieSceneState::None", (int64)ECareerMovieSceneState::None },
				{ "ECareerMovieSceneState::Setup", (int64)ECareerMovieSceneState::Setup },
				{ "ECareerMovieSceneState::Prepare", (int64)ECareerMovieSceneState::Prepare },
				{ "ECareerMovieSceneState::Start", (int64)ECareerMovieSceneState::Start },
				{ "ECareerMovieSceneState::Play", (int64)ECareerMovieSceneState::Play },
				{ "ECareerMovieSceneState::Finish", (int64)ECareerMovieSceneState::Finish },
				{ "ECareerMovieSceneState::GotoCareerHub", (int64)ECareerMovieSceneState::GotoCareerHub },
				{ "ECareerMovieSceneState::End", (int64)ECareerMovieSceneState::End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "End.Name", "ECareerMovieSceneState::End" },
				{ "Finish.Name", "ECareerMovieSceneState::Finish" },
				{ "GotoCareerHub.Name", "ECareerMovieSceneState::GotoCareerHub" },
				{ "ModuleRelativePath", "Public/ECareerMovieSceneState.h" },
				{ "None.Name", "ECareerMovieSceneState::None" },
				{ "Play.Name", "ECareerMovieSceneState::Play" },
				{ "Prepare.Name", "ECareerMovieSceneState::Prepare" },
				{ "Setup.Name", "ECareerMovieSceneState::Setup" },
				{ "Start.Name", "ECareerMovieSceneState::Start" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerMovieSceneState",
				"ECareerMovieSceneState",
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
