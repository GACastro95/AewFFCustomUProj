// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDBG_ReferBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDBG_ReferBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELDBG_ReferBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDBG_ReferBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELDBG_ReferBase::execAddRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDBG_ReferBase::execIsRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDBG_ReferBase::execRemRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemRef();
		P_NATIVE_END;
	}
	void UELDBG_ReferBase::StaticRegisterNativesUELDBG_ReferBase()
	{
		UClass* Class = UELDBG_ReferBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRef", &UELDBG_ReferBase::execAddRef },
			{ "IsRef", &UELDBG_ReferBase::execIsRef },
			{ "RemRef", &UELDBG_ReferBase::execRemRef },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELDBG_ReferBase_AddRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDBG_ReferBase_AddRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDBG_ReferBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDBG_ReferBase_AddRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDBG_ReferBase, nullptr, "AddRef", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDBG_ReferBase_AddRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDBG_ReferBase_AddRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDBG_ReferBase_AddRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDBG_ReferBase_AddRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics
	{
		struct ELDBG_ReferBase_eventIsRef_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDBG_ReferBase_eventIsRef_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDBG_ReferBase_eventIsRef_Parms), &Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDBG_ReferBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDBG_ReferBase, nullptr, "IsRef", nullptr, nullptr, sizeof(ELDBG_ReferBase_eventIsRef_Parms), Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDBG_ReferBase_IsRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDBG_ReferBase_IsRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDBG_ReferBase_RemRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDBG_ReferBase_RemRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDBG_ReferBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDBG_ReferBase_RemRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDBG_ReferBase, nullptr, "RemRef", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDBG_ReferBase_RemRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDBG_ReferBase_RemRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDBG_ReferBase_RemRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDBG_ReferBase_RemRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDBG_ReferBase_NoRegister()
	{
		return UELDBG_ReferBase::StaticClass();
	}
	struct Z_Construct_UClass_UELDBG_ReferBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDBG_ReferBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDBG_ReferBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDBG_ReferBase_AddRef, "AddRef" }, // 59675793
		{ &Z_Construct_UFunction_UELDBG_ReferBase_IsRef, "IsRef" }, // 1328839153
		{ &Z_Construct_UFunction_UELDBG_ReferBase_RemRef, "RemRef" }, // 3767728212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDBG_ReferBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDBG_ReferBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDBG_ReferBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDBG_ReferBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDBG_ReferBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDBG_ReferBase_Statics::ClassParams = {
		&UELDBG_ReferBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELDBG_ReferBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDBG_ReferBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDBG_ReferBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDBG_ReferBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDBG_ReferBase, 1405048124);
	template<> ABP_200508_API UClass* StaticClass<UELDBG_ReferBase>()
	{
		return UELDBG_ReferBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDBG_ReferBase(Z_Construct_UClass_UELDBG_ReferBase, &UELDBG_ReferBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELDBG_ReferBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDBG_ReferBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
