// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELReplicationCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELReplicationCondition() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELReplicationCondition();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELReplicationCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELReplicationCondition, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELReplicationCondition"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELReplicationCondition>()
	{
		return EELReplicationCondition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELReplicationCondition(EELReplicationCondition_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELReplicationCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELReplicationCondition_Hash() { return 1506297214U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELReplicationCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELReplicationCondition"), 0, Get_Z_Construct_UEnum_ABP_200508_EELReplicationCondition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELReplicationCondition::None", (int64)EELReplicationCondition::None },
				{ "EELReplicationCondition::Always", (int64)EELReplicationCondition::Always },
				{ "EELReplicationCondition::Changed", (int64)EELReplicationCondition::Changed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "EELReplicationCondition::Always" },
				{ "BlueprintType", "true" },
				{ "Changed.Name", "EELReplicationCondition::Changed" },
				{ "ModuleRelativePath", "Public/EELReplicationCondition.h" },
				{ "None.Name", "EELReplicationCondition::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELReplicationCondition",
				"EELReplicationCondition",
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
