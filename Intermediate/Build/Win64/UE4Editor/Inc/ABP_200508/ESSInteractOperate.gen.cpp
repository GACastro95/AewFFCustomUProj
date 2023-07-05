// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSInteractOperate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSInteractOperate() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractOperate();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSInteractOperate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSInteractOperate, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSInteractOperate"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSInteractOperate>()
	{
		return ESSInteractOperate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSInteractOperate(ESSInteractOperate_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSInteractOperate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSInteractOperate_Hash() { return 2450860049U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractOperate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSInteractOperate"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSInteractOperate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSInteractOperate::None", (int64)ESSInteractOperate::None },
				{ "ESSInteractOperate::Pickup", (int64)ESSInteractOperate::Pickup },
				{ "ESSInteractOperate::InventoryFull", (int64)ESSInteractOperate::InventoryFull },
				{ "ESSInteractOperate::Change", (int64)ESSInteractOperate::Change },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Change.Name", "ESSInteractOperate::Change" },
				{ "InventoryFull.Name", "ESSInteractOperate::InventoryFull" },
				{ "ModuleRelativePath", "Public/ESSInteractOperate.h" },
				{ "None.Name", "ESSInteractOperate::None" },
				{ "Pickup.Name", "ESSInteractOperate::Pickup" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSInteractOperate",
				"ESSInteractOperate",
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
