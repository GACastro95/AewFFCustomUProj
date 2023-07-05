// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriFsBinderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsBinderComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsBinderComponent();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsBinderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "OnBindCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "OnBindError__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCriFsBinderComponent::execBind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Bind();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriFsBinderComponent::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECriFsBinderStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriFsBinderComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	void UCriFsBinderComponent::StaticRegisterNativesUCriFsBinderComponent()
	{
		UClass* Class = UCriFsBinderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bind", &UCriFsBinderComponent::execBind },
			{ "GetStatus", &UCriFsBinderComponent::execGetStatus },
			{ "Stop", &UCriFsBinderComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "Bind", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsBinderComponent_Bind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics
	{
		struct CriFsBinderComponent_eventGetStatus_Parms
		{
			ECriFsBinderStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriFsBinderComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "GetStatus", nullptr, nullptr, sizeof(CriFsBinderComponent_eventGetStatus_Parms), Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsBinderComponent_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsBinderComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCriFsBinderComponent_NoRegister()
	{
		return UCriFsBinderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCriFsBinderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBindCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBindCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBindError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBindError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriFsBinderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriFsBinderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriFsBinderComponent_Bind, "Bind" }, // 1659896219
		{ &Z_Construct_UFunction_UCriFsBinderComponent_GetStatus, "GetStatus" }, // 2846354680
		{ &Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature, "OnBindCompleted__DelegateSignature" }, // 2940106394
		{ &Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature, "OnBindError__DelegateSignature" }, // 3018643951
		{ &Z_Construct_UFunction_UCriFsBinderComponent_Stop, "Stop" }, // 3464429063
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsBinderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CriFsBinderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsBinderComponent" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriFsBinderComponent, FilePath), METADATA_PARAMS(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsBinderComponent" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted = { "OnBindCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriFsBinderComponent, OnBindCompleted), Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsBinderComponent" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError = { "OnBindError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriFsBinderComponent, OnBindError), Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriFsBinderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriFsBinderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriFsBinderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCriFsBinderComponent_Statics::ClassParams = {
		&UCriFsBinderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCriFsBinderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCriFsBinderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriFsBinderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCriFsBinderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriFsBinderComponent, 3195777161);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriFsBinderComponent>()
	{
		return UCriFsBinderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriFsBinderComponent(Z_Construct_UClass_UCriFsBinderComponent, &UCriFsBinderComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriFsBinderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriFsBinderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
