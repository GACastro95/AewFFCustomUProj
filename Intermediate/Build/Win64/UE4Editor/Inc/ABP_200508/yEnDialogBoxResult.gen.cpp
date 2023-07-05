// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/yEnDialogBoxResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyEnDialogBoxResult() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxResult();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* yEnDialogBoxResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_yEnDialogBoxResult, Z_Construct_UPackage__Script_ABP_200508(), TEXT("yEnDialogBoxResult"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<yEnDialogBoxResult>()
	{
		return yEnDialogBoxResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_yEnDialogBoxResult(yEnDialogBoxResult_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("yEnDialogBoxResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_yEnDialogBoxResult_Hash() { return 3180172650U; }
	UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("yEnDialogBoxResult"), 0, Get_Z_Construct_UEnum_ABP_200508_yEnDialogBoxResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "yEnDialogBoxResult::Ok", (int64)yEnDialogBoxResult::Ok },
				{ "yEnDialogBoxResult::Cancel", (int64)yEnDialogBoxResult::Cancel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancel.Name", "yEnDialogBoxResult::Cancel" },
				{ "ModuleRelativePath", "Public/yEnDialogBoxResult.h" },
				{ "Ok.Name", "yEnDialogBoxResult::Ok" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"yEnDialogBoxResult",
				"yEnDialogBoxResult",
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
