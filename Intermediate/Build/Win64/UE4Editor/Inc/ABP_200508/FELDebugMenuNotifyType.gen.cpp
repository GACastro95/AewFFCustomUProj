// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/FELDebugMenuNotifyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFELDebugMenuNotifyType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_FELDebugMenuNotifyType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* FELDebugMenuNotifyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_FELDebugMenuNotifyType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("FELDebugMenuNotifyType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<FELDebugMenuNotifyType>()
	{
		return FELDebugMenuNotifyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FELDebugMenuNotifyType(FELDebugMenuNotifyType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("FELDebugMenuNotifyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_FELDebugMenuNotifyType_Hash() { return 36239466U; }
	UEnum* Z_Construct_UEnum_ABP_200508_FELDebugMenuNotifyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FELDebugMenuNotifyType"), 0, Get_Z_Construct_UEnum_ABP_200508_FELDebugMenuNotifyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FELDebugMenuNotifyType::None", (int64)FELDebugMenuNotifyType::None },
				{ "FELDebugMenuNotifyType::OnSetup", (int64)FELDebugMenuNotifyType::OnSetup },
				{ "FELDebugMenuNotifyType::OnReset", (int64)FELDebugMenuNotifyType::OnReset },
				{ "FELDebugMenuNotifyType::OnClick", (int64)FELDebugMenuNotifyType::OnClick },
				{ "FELDebugMenuNotifyType::OnValueChanged", (int64)FELDebugMenuNotifyType::OnValueChanged },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FELDebugMenuNotifyType.h" },
				{ "None.Name", "FELDebugMenuNotifyType::None" },
				{ "OnClick.Name", "FELDebugMenuNotifyType::OnClick" },
				{ "OnReset.Name", "FELDebugMenuNotifyType::OnReset" },
				{ "OnSetup.Name", "FELDebugMenuNotifyType::OnSetup" },
				{ "OnValueChanged.Name", "FELDebugMenuNotifyType::OnValueChanged" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"FELDebugMenuNotifyType",
				"FELDebugMenuNotifyType",
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
