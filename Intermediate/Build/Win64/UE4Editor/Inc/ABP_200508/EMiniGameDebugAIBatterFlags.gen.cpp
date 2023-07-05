// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMiniGameDebugAIBatterFlags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMiniGameDebugAIBatterFlags() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameDebugAIBatterFlags();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMiniGameDebugAIBatterFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMiniGameDebugAIBatterFlags, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMiniGameDebugAIBatterFlags"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMiniGameDebugAIBatterFlags>()
	{
		return EMiniGameDebugAIBatterFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMiniGameDebugAIBatterFlags(EMiniGameDebugAIBatterFlags_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMiniGameDebugAIBatterFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMiniGameDebugAIBatterFlags_Hash() { return 1478939609U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameDebugAIBatterFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMiniGameDebugAIBatterFlags"), 0, Get_Z_Construct_UEnum_ABP_200508_EMiniGameDebugAIBatterFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMiniGameDebugAIBatterFlags::RadioButton_None", (int64)EMiniGameDebugAIBatterFlags::RadioButton_None },
				{ "EMiniGameDebugAIBatterFlags::RadioButton_Missing", (int64)EMiniGameDebugAIBatterFlags::RadioButton_Missing },
				{ "EMiniGameDebugAIBatterFlags::RadioButton_Hit0", (int64)EMiniGameDebugAIBatterFlags::RadioButton_Hit0 },
				{ "EMiniGameDebugAIBatterFlags::RadioButton_Hit1", (int64)EMiniGameDebugAIBatterFlags::RadioButton_Hit1 },
				{ "EMiniGameDebugAIBatterFlags::RadioButton_Hit2", (int64)EMiniGameDebugAIBatterFlags::RadioButton_Hit2 },
				{ "EMiniGameDebugAIBatterFlags::RadioButton_Hit3", (int64)EMiniGameDebugAIBatterFlags::RadioButton_Hit3 },
				{ "EMiniGameDebugAIBatterFlags::RadioButton_Hit4", (int64)EMiniGameDebugAIBatterFlags::RadioButton_Hit4 },
				{ "EMiniGameDebugAIBatterFlags::RadioButton_Homerun", (int64)EMiniGameDebugAIBatterFlags::RadioButton_Homerun },
				{ "EMiniGameDebugAIBatterFlags::RadioButton_MAX", (int64)EMiniGameDebugAIBatterFlags::RadioButton_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EMiniGameDebugAIBatterFlags.h" },
				{ "RadioButton_Hit0.Name", "EMiniGameDebugAIBatterFlags::RadioButton_Hit0" },
				{ "RadioButton_Hit1.Name", "EMiniGameDebugAIBatterFlags::RadioButton_Hit1" },
				{ "RadioButton_Hit2.Name", "EMiniGameDebugAIBatterFlags::RadioButton_Hit2" },
				{ "RadioButton_Hit3.Name", "EMiniGameDebugAIBatterFlags::RadioButton_Hit3" },
				{ "RadioButton_Hit4.Name", "EMiniGameDebugAIBatterFlags::RadioButton_Hit4" },
				{ "RadioButton_Homerun.Name", "EMiniGameDebugAIBatterFlags::RadioButton_Homerun" },
				{ "RadioButton_MAX.Hidden", "" },
				{ "RadioButton_MAX.Name", "EMiniGameDebugAIBatterFlags::RadioButton_MAX" },
				{ "RadioButton_Missing.Name", "EMiniGameDebugAIBatterFlags::RadioButton_Missing" },
				{ "RadioButton_None.Name", "EMiniGameDebugAIBatterFlags::RadioButton_None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMiniGameDebugAIBatterFlags",
				"EMiniGameDebugAIBatterFlags",
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
