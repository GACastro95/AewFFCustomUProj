// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/FELDebugMenuDialogButtonType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFELDebugMenuDialogButtonType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_FELDebugMenuDialogButtonType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* FELDebugMenuDialogButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_FELDebugMenuDialogButtonType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("FELDebugMenuDialogButtonType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<FELDebugMenuDialogButtonType>()
	{
		return FELDebugMenuDialogButtonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FELDebugMenuDialogButtonType(FELDebugMenuDialogButtonType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("FELDebugMenuDialogButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_FELDebugMenuDialogButtonType_Hash() { return 3886481929U; }
	UEnum* Z_Construct_UEnum_ABP_200508_FELDebugMenuDialogButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FELDebugMenuDialogButtonType"), 0, Get_Z_Construct_UEnum_ABP_200508_FELDebugMenuDialogButtonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FELDebugMenuDialogButtonType::OK", (int64)FELDebugMenuDialogButtonType::OK },
				{ "FELDebugMenuDialogButtonType::OK_Cancel", (int64)FELDebugMenuDialogButtonType::OK_Cancel },
				{ "FELDebugMenuDialogButtonType::YES_NO", (int64)FELDebugMenuDialogButtonType::YES_NO },
				{ "FELDebugMenuDialogButtonType::YES_NO_Cancel", (int64)FELDebugMenuDialogButtonType::YES_NO_Cancel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FELDebugMenuDialogButtonType.h" },
				{ "OK.Name", "FELDebugMenuDialogButtonType::OK" },
				{ "OK_Cancel.Name", "FELDebugMenuDialogButtonType::OK_Cancel" },
				{ "YES_NO.Name", "FELDebugMenuDialogButtonType::YES_NO" },
				{ "YES_NO_Cancel.Name", "FELDebugMenuDialogButtonType::YES_NO_Cancel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"FELDebugMenuDialogButtonType",
				"FELDebugMenuDialogButtonType",
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
