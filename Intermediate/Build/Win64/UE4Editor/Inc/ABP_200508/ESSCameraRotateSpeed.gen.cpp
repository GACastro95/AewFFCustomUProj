// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSCameraRotateSpeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSCameraRotateSpeed() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraRotateSpeed();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSCameraRotateSpeed_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSCameraRotateSpeed, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSCameraRotateSpeed"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSCameraRotateSpeed>()
	{
		return ESSCameraRotateSpeed_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSCameraRotateSpeed(ESSCameraRotateSpeed_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSCameraRotateSpeed"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSCameraRotateSpeed_Hash() { return 3325124594U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraRotateSpeed()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSCameraRotateSpeed"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSCameraRotateSpeed_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSCameraRotateSpeed::Slow", (int64)ESSCameraRotateSpeed::Slow },
				{ "ESSCameraRotateSpeed::Normal", (int64)ESSCameraRotateSpeed::Normal },
				{ "ESSCameraRotateSpeed::Fast", (int64)ESSCameraRotateSpeed::Fast },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Fast.Name", "ESSCameraRotateSpeed::Fast" },
				{ "ModuleRelativePath", "Public/ESSCameraRotateSpeed.h" },
				{ "Normal.Name", "ESSCameraRotateSpeed::Normal" },
				{ "Slow.Name", "ESSCameraRotateSpeed::Slow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSCameraRotateSpeed",
				"ESSCameraRotateSpeed",
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
