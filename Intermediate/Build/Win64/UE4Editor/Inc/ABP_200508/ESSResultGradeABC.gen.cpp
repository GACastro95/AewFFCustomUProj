// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSResultGradeABC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSResultGradeABC() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSResultGradeABC();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSResultGradeABC_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSResultGradeABC, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSResultGradeABC"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSResultGradeABC>()
	{
		return ESSResultGradeABC_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSResultGradeABC(ESSResultGradeABC_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSResultGradeABC"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSResultGradeABC_Hash() { return 3032916031U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSResultGradeABC()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSResultGradeABC"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSResultGradeABC_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSResultGradeABC::A_High", (int64)ESSResultGradeABC::A_High },
				{ "ESSResultGradeABC::A_Mid", (int64)ESSResultGradeABC::A_Mid },
				{ "ESSResultGradeABC::A_Low", (int64)ESSResultGradeABC::A_Low },
				{ "ESSResultGradeABC::B_High", (int64)ESSResultGradeABC::B_High },
				{ "ESSResultGradeABC::B_Mid", (int64)ESSResultGradeABC::B_Mid },
				{ "ESSResultGradeABC::B_Low", (int64)ESSResultGradeABC::B_Low },
				{ "ESSResultGradeABC::C_High", (int64)ESSResultGradeABC::C_High },
				{ "ESSResultGradeABC::C_Mid", (int64)ESSResultGradeABC::C_Mid },
				{ "ESSResultGradeABC::C_Low", (int64)ESSResultGradeABC::C_Low },
				{ "ESSResultGradeABC::Max", (int64)ESSResultGradeABC::Max },
				{ "ESSResultGradeABC::Default", (int64)ESSResultGradeABC::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A_High.Name", "ESSResultGradeABC::A_High" },
				{ "A_Low.Name", "ESSResultGradeABC::A_Low" },
				{ "A_Mid.Name", "ESSResultGradeABC::A_Mid" },
				{ "B_High.Name", "ESSResultGradeABC::B_High" },
				{ "B_Low.Name", "ESSResultGradeABC::B_Low" },
				{ "B_Mid.Name", "ESSResultGradeABC::B_Mid" },
				{ "BlueprintType", "true" },
				{ "C_High.Name", "ESSResultGradeABC::C_High" },
				{ "C_Low.Name", "ESSResultGradeABC::C_Low" },
				{ "C_Mid.Name", "ESSResultGradeABC::C_Mid" },
				{ "Default.Name", "ESSResultGradeABC::Default" },
				{ "Max.Name", "ESSResultGradeABC::Max" },
				{ "ModuleRelativePath", "Public/ESSResultGradeABC.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSResultGradeABC",
				"ESSResultGradeABC",
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
