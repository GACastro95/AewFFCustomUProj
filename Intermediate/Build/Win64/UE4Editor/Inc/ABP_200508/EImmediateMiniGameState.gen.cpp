// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EImmediateMiniGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEImmediateMiniGameState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EImmediateMiniGameState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EImmediateMiniGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EImmediateMiniGameState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EImmediateMiniGameState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EImmediateMiniGameState>()
	{
		return EImmediateMiniGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImmediateMiniGameState(EImmediateMiniGameState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EImmediateMiniGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EImmediateMiniGameState_Hash() { return 1644813542U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EImmediateMiniGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImmediateMiniGameState"), 0, Get_Z_Construct_UEnum_ABP_200508_EImmediateMiniGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImmediateMiniGameState::None", (int64)EImmediateMiniGameState::None },
				{ "EImmediateMiniGameState::HomeRunDerby_SkipButter", (int64)EImmediateMiniGameState::HomeRunDerby_SkipButter },
				{ "EImmediateMiniGameState::HomeRunDerby_SkipToResult", (int64)EImmediateMiniGameState::HomeRunDerby_SkipToResult },
				{ "EImmediateMiniGameState::HomeRunDerby_SkipToNextInning", (int64)EImmediateMiniGameState::HomeRunDerby_SkipToNextInning },
				{ "EImmediateMiniGameState::ObjectCount_ChangeCamera", (int64)EImmediateMiniGameState::ObjectCount_ChangeCamera },
				{ "EImmediateMiniGameState::MiniGame_Localize", (int64)EImmediateMiniGameState::MiniGame_Localize },
				{ "EImmediateMiniGameState::MiniGame_Restart", (int64)EImmediateMiniGameState::MiniGame_Restart },
				{ "EImmediateMiniGameState::MiniGame_SkipToResult", (int64)EImmediateMiniGameState::MiniGame_SkipToResult },
				{ "EImmediateMiniGameState::MiniGame_Pause", (int64)EImmediateMiniGameState::MiniGame_Pause },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HomeRunDerby_SkipButter.Name", "EImmediateMiniGameState::HomeRunDerby_SkipButter" },
				{ "HomeRunDerby_SkipToNextInning.Name", "EImmediateMiniGameState::HomeRunDerby_SkipToNextInning" },
				{ "HomeRunDerby_SkipToResult.Name", "EImmediateMiniGameState::HomeRunDerby_SkipToResult" },
				{ "MiniGame_Localize.Name", "EImmediateMiniGameState::MiniGame_Localize" },
				{ "MiniGame_Pause.Name", "EImmediateMiniGameState::MiniGame_Pause" },
				{ "MiniGame_Restart.Name", "EImmediateMiniGameState::MiniGame_Restart" },
				{ "MiniGame_SkipToResult.Name", "EImmediateMiniGameState::MiniGame_SkipToResult" },
				{ "ModuleRelativePath", "Public/EImmediateMiniGameState.h" },
				{ "None.Name", "EImmediateMiniGameState::None" },
				{ "ObjectCount_ChangeCamera.Name", "EImmediateMiniGameState::ObjectCount_ChangeCamera" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EImmediateMiniGameState",
				"EImmediateMiniGameState",
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
