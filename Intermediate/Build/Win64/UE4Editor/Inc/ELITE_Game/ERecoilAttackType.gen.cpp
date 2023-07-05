// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERecoilAttackType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERecoilAttackType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERecoilAttackType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERecoilAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERecoilAttackType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERecoilAttackType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERecoilAttackType>()
	{
		return ERecoilAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERecoilAttackType(ERecoilAttackType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERecoilAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERecoilAttackType_Hash() { return 2136254382U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERecoilAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERecoilAttackType"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERecoilAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERecoilAttackType::None", (int64)ERecoilAttackType::None },
				{ "ERecoilAttackType::Corner", (int64)ERecoilAttackType::Corner },
				{ "ERecoilAttackType::Rope", (int64)ERecoilAttackType::Rope },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Corner.Name", "ERecoilAttackType::Corner" },
				{ "ModuleRelativePath", "Public/ERecoilAttackType.h" },
				{ "None.Name", "ERecoilAttackType::None" },
				{ "Rope.Name", "ERecoilAttackType::Rope" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERecoilAttackType",
				"ERecoilAttackType",
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
