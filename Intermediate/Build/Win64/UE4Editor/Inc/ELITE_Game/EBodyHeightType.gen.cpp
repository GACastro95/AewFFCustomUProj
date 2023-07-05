// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EBodyHeightType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBodyHeightType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyHeightType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EBodyHeightType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EBodyHeightType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EBodyHeightType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EBodyHeightType>()
	{
		return EBodyHeightType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyHeightType(EBodyHeightType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EBodyHeightType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EBodyHeightType_Hash() { return 3217894449U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EBodyHeightType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyHeightType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EBodyHeightType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodyHeightType::Medium", (int64)EBodyHeightType::Medium },
				{ "EBodyHeightType::SuperSmall", (int64)EBodyHeightType::SuperSmall },
				{ "EBodyHeightType::Small", (int64)EBodyHeightType::Small },
				{ "EBodyHeightType::MediumSmall", (int64)EBodyHeightType::MediumSmall },
				{ "EBodyHeightType::MediumLarge", (int64)EBodyHeightType::MediumLarge },
				{ "EBodyHeightType::Large", (int64)EBodyHeightType::Large },
				{ "EBodyHeightType::BigMan", (int64)EBodyHeightType::BigMan },
				{ "EBodyHeightType::Staff", (int64)EBodyHeightType::Staff },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BigMan.Name", "EBodyHeightType::BigMan" },
				{ "BlueprintType", "true" },
				{ "Large.Name", "EBodyHeightType::Large" },
				{ "Medium.Name", "EBodyHeightType::Medium" },
				{ "MediumLarge.Name", "EBodyHeightType::MediumLarge" },
				{ "MediumSmall.Name", "EBodyHeightType::MediumSmall" },
				{ "ModuleRelativePath", "Public/EBodyHeightType.h" },
				{ "Small.Name", "EBodyHeightType::Small" },
				{ "Staff.Name", "EBodyHeightType::Staff" },
				{ "SuperSmall.Name", "EBodyHeightType::SuperSmall" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EBodyHeightType",
				"EBodyHeightType",
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
