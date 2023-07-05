// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EWhipState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWhipState() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWhipState();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EWhipState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EWhipState, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EWhipState"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EWhipState>()
	{
		return EWhipState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWhipState(EWhipState_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EWhipState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EWhipState_Hash() { return 2380904543U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EWhipState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWhipState"), 0, Get_Z_Construct_UEnum_ELITE_Game_EWhipState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWhipState::None", (int64)EWhipState::None },
				{ "EWhipState::Front_Stand", (int64)EWhipState::Front_Stand },
				{ "EWhipState::Back_Stand", (int64)EWhipState::Back_Stand },
				{ "EWhipState::Front_HandStand", (int64)EWhipState::Front_HandStand },
				{ "EWhipState::Back_HandStand", (int64)EWhipState::Back_HandStand },
				{ "EWhipState::Back_StandLeftHead", (int64)EWhipState::Back_StandLeftHead },
				{ "EWhipState::Back_StandRightHead", (int64)EWhipState::Back_StandRightHead },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back_HandStand.Name", "EWhipState::Back_HandStand" },
				{ "Back_Stand.Name", "EWhipState::Back_Stand" },
				{ "Back_StandLeftHead.Name", "EWhipState::Back_StandLeftHead" },
				{ "Back_StandRightHead.Name", "EWhipState::Back_StandRightHead" },
				{ "BlueprintType", "true" },
				{ "Front_HandStand.Name", "EWhipState::Front_HandStand" },
				{ "Front_Stand.Name", "EWhipState::Front_Stand" },
				{ "ModuleRelativePath", "Public/EWhipState.h" },
				{ "None.Name", "EWhipState::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EWhipState",
				"EWhipState",
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
