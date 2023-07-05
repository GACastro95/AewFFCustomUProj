// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ERefereeMeshMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERefereeMeshMode() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ERefereeMeshMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ERefereeMeshMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ERefereeMeshMode, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ERefereeMeshMode"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ERefereeMeshMode>()
	{
		return ERefereeMeshMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERefereeMeshMode(ERefereeMeshMode_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ERefereeMeshMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ERefereeMeshMode_Hash() { return 247853886U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ERefereeMeshMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERefereeMeshMode"), 0, Get_Z_Construct_UEnum_ABP_200508_ERefereeMeshMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERefereeMeshMode::Default", (int64)ERefereeMeshMode::Default },
				{ "ERefereeMeshMode::CloneForDitherOpacityMask", (int64)ERefereeMeshMode::CloneForDitherOpacityMask },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CloneForDitherOpacityMask.Name", "ERefereeMeshMode::CloneForDitherOpacityMask" },
				{ "Default.Name", "ERefereeMeshMode::Default" },
				{ "ModuleRelativePath", "Public/ERefereeMeshMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ERefereeMeshMode",
				"ERefereeMeshMode",
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
