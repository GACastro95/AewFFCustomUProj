// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDBG_ReferBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDBG_ReferBase() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDBG_ReferBase_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDBG_ReferBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	DEFINE_FUNCTION(UYDBG_ReferBase::execAddRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBG_ReferBase::execIsRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBG_ReferBase::execRemRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemRef();
		P_NATIVE_END;
	}
	void UYDBG_ReferBase::StaticRegisterNativesUYDBG_ReferBase()
	{
		UClass* Class = UYDBG_ReferBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRef", &UYDBG_ReferBase::execAddRef },
			{ "IsRef", &UYDBG_ReferBase::execIsRef },
			{ "RemRef", &UYDBG_ReferBase::execRemRef },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDBG_ReferBase_AddRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBG_ReferBase_AddRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBG_ReferBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBG_ReferBase_AddRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBG_ReferBase, nullptr, "AddRef", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBG_ReferBase_AddRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBG_ReferBase_AddRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBG_ReferBase_AddRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBG_ReferBase_AddRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics
	{
		struct YDBG_ReferBase_eventIsRef_Parms
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
	void Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBG_ReferBase_eventIsRef_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBG_ReferBase_eventIsRef_Parms), &Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBG_ReferBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBG_ReferBase, nullptr, "IsRef", nullptr, nullptr, sizeof(YDBG_ReferBase_eventIsRef_Parms), Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBG_ReferBase_IsRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBG_ReferBase_IsRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBG_ReferBase_RemRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBG_ReferBase_RemRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBG_ReferBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBG_ReferBase_RemRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBG_ReferBase, nullptr, "RemRef", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBG_ReferBase_RemRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBG_ReferBase_RemRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBG_ReferBase_RemRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBG_ReferBase_RemRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDBG_ReferBase_NoRegister()
	{
		return UYDBG_ReferBase::StaticClass();
	}
	struct Z_Construct_UClass_UYDBG_ReferBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDBG_ReferBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDBG_ReferBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDBG_ReferBase_AddRef, "AddRef" }, // 3030272258
		{ &Z_Construct_UFunction_UYDBG_ReferBase_IsRef, "IsRef" }, // 1703449093
		{ &Z_Construct_UFunction_UYDBG_ReferBase_RemRef, "RemRef" }, // 3619850399
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDBG_ReferBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDBG_ReferBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDBG_ReferBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDBG_ReferBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDBG_ReferBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDBG_ReferBase_Statics::ClassParams = {
		&UYDBG_ReferBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYDBG_ReferBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDBG_ReferBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDBG_ReferBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDBG_ReferBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDBG_ReferBase, 4230031163);
	template<> YDEBUG_API UClass* StaticClass<UYDBG_ReferBase>()
	{
		return UYDBG_ReferBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDBG_ReferBase(Z_Construct_UClass_UYDBG_ReferBase, &UYDBG_ReferBase::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDBG_ReferBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDBG_ReferBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
