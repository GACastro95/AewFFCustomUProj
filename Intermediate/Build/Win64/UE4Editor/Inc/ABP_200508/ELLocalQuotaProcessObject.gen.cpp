// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLocalQuotaProcessObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLocalQuotaProcessObject() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELLocalQuotaProcessObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLocalQuotaProcessObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_LocalQuotaUpdateCompleteDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELLocalQuotaProcessObject::execRequestGetLocalQuotaInfo)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param__delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetLocalQuotaInfo(FLocalQuotaUpdateCompleteDelegate(Z_Param__delegate));
		P_NATIVE_END;
	}
	void UELLocalQuotaProcessObject::StaticRegisterNativesUELLocalQuotaProcessObject()
	{
		UClass* Class = UELLocalQuotaProcessObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestGetLocalQuotaInfo", &UELLocalQuotaProcessObject::execRequestGetLocalQuotaInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics
	{
		struct ELLocalQuotaProcessObject_eventRequestGetLocalQuotaInfo_Parms
		{
			FScriptDelegate _delegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__delegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::NewProp__delegate = { "_delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLocalQuotaProcessObject_eventRequestGetLocalQuotaInfo_Parms, _delegate), Z_Construct_UDelegateFunction_ABP_200508_LocalQuotaUpdateCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLocalQuotaProcessObject_eventRequestGetLocalQuotaInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLocalQuotaProcessObject_eventRequestGetLocalQuotaInfo_Parms), &Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::NewProp__delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLocalQuotaProcessObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLocalQuotaProcessObject, nullptr, "RequestGetLocalQuotaInfo", nullptr, nullptr, sizeof(ELLocalQuotaProcessObject_eventRequestGetLocalQuotaInfo_Parms), Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELLocalQuotaProcessObject_NoRegister()
	{
		return UELLocalQuotaProcessObject::StaticClass();
	}
	struct Z_Construct_UClass_UELLocalQuotaProcessObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_m_CompleteDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELLocalQuotaProcessObject_RequestGetLocalQuotaInfo, "RequestGetLocalQuotaInfo" }, // 941744971
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLocalQuotaProcessObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLocalQuotaProcessObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::NewProp_m_CompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLocalQuotaProcessObject" },
		{ "ModuleRelativePath", "Public/ELLocalQuotaProcessObject.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::NewProp_m_CompleteDelegate = { "m_CompleteDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLocalQuotaProcessObject, m_CompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_LocalQuotaUpdateCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::NewProp_m_CompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::NewProp_m_CompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::NewProp_m_CompleteDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLocalQuotaProcessObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::ClassParams = {
		&UELLocalQuotaProcessObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLocalQuotaProcessObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLocalQuotaProcessObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLocalQuotaProcessObject, 805915812);
	template<> ABP_200508_API UClass* StaticClass<UELLocalQuotaProcessObject>()
	{
		return UELLocalQuotaProcessObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLocalQuotaProcessObject(Z_Construct_UClass_UELLocalQuotaProcessObject, &UELLocalQuotaProcessObject::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELLocalQuotaProcessObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLocalQuotaProcessObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
