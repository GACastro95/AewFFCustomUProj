// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EWrestlerDataObjectFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWrestlerDataObjectFlag() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerDataObjectFlag();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EWrestlerDataObjectFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EWrestlerDataObjectFlag, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EWrestlerDataObjectFlag"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EWrestlerDataObjectFlag>()
	{
		return EWrestlerDataObjectFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWrestlerDataObjectFlag(EWrestlerDataObjectFlag_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EWrestlerDataObjectFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EWrestlerDataObjectFlag_Hash() { return 1591879929U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerDataObjectFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWrestlerDataObjectFlag"), 0, Get_Z_Construct_UEnum_ELITE_Game_EWrestlerDataObjectFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWrestlerDataObjectFlag::None", (int64)EWrestlerDataObjectFlag::None },
				{ "EWrestlerDataObjectFlag::Ready", (int64)EWrestlerDataObjectFlag::Ready },
				{ "EWrestlerDataObjectFlag::Unlocked", (int64)EWrestlerDataObjectFlag::Unlocked },
				{ "EWrestlerDataObjectFlag::Editable", (int64)EWrestlerDataObjectFlag::Editable },
				{ "EWrestlerDataObjectFlag::Modify", (int64)EWrestlerDataObjectFlag::Modify },
				{ "EWrestlerDataObjectFlag::Disabled", (int64)EWrestlerDataObjectFlag::Disabled },
				{ "EWrestlerDataObjectFlag::UsingCreateTeam", (int64)EWrestlerDataObjectFlag::UsingCreateTeam },
				{ "EWrestlerDataObjectFlag::UsingCareer", (int64)EWrestlerDataObjectFlag::UsingCareer },
				{ "EWrestlerDataObjectFlag::SaveRequest", (int64)EWrestlerDataObjectFlag::SaveRequest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Name", "EWrestlerDataObjectFlag::Disabled" },
				{ "Editable.Name", "EWrestlerDataObjectFlag::Editable" },
				{ "Modify.Name", "EWrestlerDataObjectFlag::Modify" },
				{ "ModuleRelativePath", "Public/EWrestlerDataObjectFlag.h" },
				{ "None.Name", "EWrestlerDataObjectFlag::None" },
				{ "Ready.Name", "EWrestlerDataObjectFlag::Ready" },
				{ "SaveRequest.Name", "EWrestlerDataObjectFlag::SaveRequest" },
				{ "Unlocked.Name", "EWrestlerDataObjectFlag::Unlocked" },
				{ "UsingCareer.Name", "EWrestlerDataObjectFlag::UsingCareer" },
				{ "UsingCreateTeam.Name", "EWrestlerDataObjectFlag::UsingCreateTeam" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EWrestlerDataObjectFlag",
				"EWrestlerDataObjectFlag",
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
