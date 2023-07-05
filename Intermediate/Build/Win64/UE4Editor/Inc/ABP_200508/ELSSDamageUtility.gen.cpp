// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSDamageUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSDamageUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDamageUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDamageUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttackType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
// End Cross Module References
	DEFINE_FUNCTION(UELSSDamageUtility::execConvertToDamageReason)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSAttackType,Z_Param_AttackType);
		P_GET_UBOOL(Z_Param_IsPlayingSyncMotion);
		P_GET_UBOOL(Z_Param_isWeaponAttack);
		P_GET_UBOOL(Z_Param_isIgnoreGuard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSDamageReason*)Z_Param__Result=UELSSDamageUtility::ConvertToDamageReason(Z_Param_WorldContextObject,ESSAttackType(Z_Param_AttackType),Z_Param_IsPlayingSyncMotion,Z_Param_isWeaponAttack,Z_Param_isIgnoreGuard);
		P_NATIVE_END;
	}
	void UELSSDamageUtility::StaticRegisterNativesUELSSDamageUtility()
	{
		UClass* Class = UELSSDamageUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToDamageReason", &UELSSDamageUtility::execConvertToDamageReason },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics
	{
		struct ELSSDamageUtility_eventConvertToDamageReason_Parms
		{
			const UObject* WorldContextObject;
			ESSAttackType AttackType;
			bool IsPlayingSyncMotion;
			bool isWeaponAttack;
			bool isIgnoreGuard;
			ESSDamageReason ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttackType;
		static void NewProp_IsPlayingSyncMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayingSyncMotion;
		static void NewProp_isWeaponAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWeaponAttack;
		static void NewProp_isIgnoreGuard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isIgnoreGuard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDamageUtility_eventConvertToDamageReason_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_AttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDamageUtility_eventConvertToDamageReason_Parms, AttackType), Z_Construct_UEnum_ABP_200508_ESSAttackType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_IsPlayingSyncMotion_SetBit(void* Obj)
	{
		((ELSSDamageUtility_eventConvertToDamageReason_Parms*)Obj)->IsPlayingSyncMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_IsPlayingSyncMotion = { "IsPlayingSyncMotion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDamageUtility_eventConvertToDamageReason_Parms), &Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_IsPlayingSyncMotion_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_isWeaponAttack_SetBit(void* Obj)
	{
		((ELSSDamageUtility_eventConvertToDamageReason_Parms*)Obj)->isWeaponAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_isWeaponAttack = { "isWeaponAttack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDamageUtility_eventConvertToDamageReason_Parms), &Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_isWeaponAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_isIgnoreGuard_SetBit(void* Obj)
	{
		((ELSSDamageUtility_eventConvertToDamageReason_Parms*)Obj)->isIgnoreGuard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_isIgnoreGuard = { "isIgnoreGuard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDamageUtility_eventConvertToDamageReason_Parms), &Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_isIgnoreGuard_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDamageUtility_eventConvertToDamageReason_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSDamageReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_AttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_AttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_IsPlayingSyncMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_isWeaponAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_isIgnoreGuard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDamageUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSDamageUtility, nullptr, "ConvertToDamageReason", nullptr, nullptr, sizeof(ELSSDamageUtility_eventConvertToDamageReason_Parms), Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSDamageUtility_NoRegister()
	{
		return UELSSDamageUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSDamageUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSDamageUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSDamageUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSDamageUtility_ConvertToDamageReason, "ConvertToDamageReason" }, // 645557026
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDamageUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSDamageUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSDamageUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSDamageUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSDamageUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSDamageUtility_Statics::ClassParams = {
		&UELSSDamageUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSDamageUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDamageUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSDamageUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSDamageUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSDamageUtility, 1056330659);
	template<> ABP_200508_API UClass* StaticClass<UELSSDamageUtility>()
	{
		return UELSSDamageUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSDamageUtility(Z_Construct_UClass_UELSSDamageUtility, &UELSSDamageUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSDamageUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSDamageUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
