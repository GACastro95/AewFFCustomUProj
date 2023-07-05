// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAnimInstance_FingerSign.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimInstance_FingerSign() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimInstance_FingerSign_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimInstance_FingerSign();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELFingerSignPartType();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimInstance_FingerSign::execIsUseMotion)
	{
		P_GET_ENUM(EELFingerSignPartType,Z_Param_Part);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUseMotion(EELFingerSignPartType(Z_Param_Part));
		P_NATIVE_END;
	}
	void UELAnimInstance_FingerSign::StaticRegisterNativesUELAnimInstance_FingerSign()
	{
		UClass* Class = UELAnimInstance_FingerSign::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsUseMotion", &UELAnimInstance_FingerSign::execIsUseMotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics
	{
		struct ELAnimInstance_FingerSign_eventIsUseMotion_Parms
		{
			EELFingerSignPartType Part;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Part_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Part;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::NewProp_Part_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::NewProp_Part = { "Part", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_FingerSign_eventIsUseMotion_Parms, Part), Z_Construct_UEnum_ABP_200508_EELFingerSignPartType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAnimInstance_FingerSign_eventIsUseMotion_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAnimInstance_FingerSign_eventIsUseMotion_Parms), &Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::NewProp_Part_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::NewProp_Part,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_FingerSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_FingerSign, nullptr, "IsUseMotion", nullptr, nullptr, sizeof(ELAnimInstance_FingerSign_eventIsUseMotion_Parms), Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimInstance_FingerSign_NoRegister()
	{
		return UELAnimInstance_FingerSign::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimInstance_FingerSign_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUseFingerSignLeft_MetaData[];
#endif
		static void NewProp_IsUseFingerSignLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUseFingerSignLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBlendSecondsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBlendSecondsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutBlendSecondsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutBlendSecondsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUseFingerSignRight_MetaData[];
#endif
		static void NewProp_IsUseFingerSignRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUseFingerSignRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBlendSecondsRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBlendSecondsRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutBlendSecondsRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutBlendSecondsRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimInstance_FingerSign_IsUseMotion, "IsUseMotion" }, // 3381273669
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ELAnimInstance_FingerSign.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FingerSign.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FingerSign" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FingerSign.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignLeft_SetBit(void* Obj)
	{
		((UELAnimInstance_FingerSign*)Obj)->IsUseFingerSignLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignLeft = { "IsUseFingerSignLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimInstance_FingerSign), &Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_InBlendSecondsLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FingerSign" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FingerSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_InBlendSecondsLeft = { "InBlendSecondsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FingerSign, InBlendSecondsLeft), METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_InBlendSecondsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_InBlendSecondsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_OutBlendSecondsLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FingerSign" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FingerSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_OutBlendSecondsLeft = { "OutBlendSecondsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FingerSign, OutBlendSecondsLeft), METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_OutBlendSecondsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_OutBlendSecondsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FingerSign" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FingerSign.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignRight_SetBit(void* Obj)
	{
		((UELAnimInstance_FingerSign*)Obj)->IsUseFingerSignRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignRight = { "IsUseFingerSignRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimInstance_FingerSign), &Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_InBlendSecondsRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FingerSign" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FingerSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_InBlendSecondsRight = { "InBlendSecondsRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FingerSign, InBlendSecondsRight), METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_InBlendSecondsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_InBlendSecondsRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_OutBlendSecondsRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FingerSign" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FingerSign.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_OutBlendSecondsRight = { "OutBlendSecondsRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FingerSign, OutBlendSecondsRight), METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_OutBlendSecondsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_OutBlendSecondsRight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_InBlendSecondsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_OutBlendSecondsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_IsUseFingerSignRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_InBlendSecondsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::NewProp_OutBlendSecondsRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimInstance_FingerSign>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::ClassParams = {
		&UELAnimInstance_FingerSign::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimInstance_FingerSign()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimInstance_FingerSign_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimInstance_FingerSign, 3748610738);
	template<> ABP_200508_API UClass* StaticClass<UELAnimInstance_FingerSign>()
	{
		return UELAnimInstance_FingerSign::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimInstance_FingerSign(Z_Construct_UClass_UELAnimInstance_FingerSign, &UELAnimInstance_FingerSign::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELAnimInstance_FingerSign"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimInstance_FingerSign);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
