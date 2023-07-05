// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSPlayerStartLocatorAreaId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSPlayerStartLocatorAreaId() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorAreaId();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSPlayerStartLocatorAreaId_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorAreaId, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSPlayerStartLocatorAreaId"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerStartLocatorAreaId>()
	{
		return ESSPlayerStartLocatorAreaId_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSPlayerStartLocatorAreaId(ESSPlayerStartLocatorAreaId_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSPlayerStartLocatorAreaId"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorAreaId_Hash() { return 2060389574U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorAreaId()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSPlayerStartLocatorAreaId"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorAreaId_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSPlayerStartLocatorAreaId::Area_A", (int64)ESSPlayerStartLocatorAreaId::Area_A },
				{ "ESSPlayerStartLocatorAreaId::Area_B", (int64)ESSPlayerStartLocatorAreaId::Area_B },
				{ "ESSPlayerStartLocatorAreaId::Area_C", (int64)ESSPlayerStartLocatorAreaId::Area_C },
				{ "ESSPlayerStartLocatorAreaId::Num", (int64)ESSPlayerStartLocatorAreaId::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Area_A.Name", "ESSPlayerStartLocatorAreaId::Area_A" },
				{ "Area_B.Name", "ESSPlayerStartLocatorAreaId::Area_B" },
				{ "Area_C.Name", "ESSPlayerStartLocatorAreaId::Area_C" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESSPlayerStartLocatorAreaId.h" },
				{ "Num.Name", "ESSPlayerStartLocatorAreaId::Num" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSPlayerStartLocatorAreaId",
				"ESSPlayerStartLocatorAreaId",
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
