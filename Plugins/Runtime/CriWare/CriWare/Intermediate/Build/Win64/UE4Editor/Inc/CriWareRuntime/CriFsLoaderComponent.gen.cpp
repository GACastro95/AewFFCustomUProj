// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriFsLoaderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsLoaderComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, nullptr, "OnLoadCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, nullptr, "OnLoadError__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCriFsLoaderComponent::execGetDataArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetDataArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriFsLoaderComponent::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECriFsLoaderStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriFsLoaderComponent::execLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Load();
		P_NATIVE_END;
	}
	void UCriFsLoaderComponent::StaticRegisterNativesUCriFsLoaderComponent()
	{
		UClass* Class = UCriFsLoaderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataArray", &UCriFsLoaderComponent::execGetDataArray },
			{ "GetStatus", &UCriFsLoaderComponent::execGetStatus },
			{ "Load", &UCriFsLoaderComponent::execLoad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics
	{
		struct CriFsLoaderComponent_eventGetDataArray_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriFsLoaderComponent_eventGetDataArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, nullptr, "GetDataArray", nullptr, nullptr, sizeof(CriFsLoaderComponent_eventGetDataArray_Parms), Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics
	{
		struct CriFsLoaderComponent_eventGetStatus_Parms
		{
			ECriFsLoaderStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriFsLoaderComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, nullptr, "GetStatus", nullptr, nullptr, sizeof(CriFsLoaderComponent_eventGetStatus_Parms), Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, nullptr, "Load", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister()
	{
		return UCriFsLoaderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCriFsLoaderComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoadError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriFsLoaderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriFsLoaderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray, "GetDataArray" }, // 2019444099
		{ &Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus, "GetStatus" }, // 3537792834
		{ &Z_Construct_UFunction_UCriFsLoaderComponent_Load, "Load" }, // 2744513397
		{ &Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature, "OnLoadCompleted__DelegateSignature" }, // 2568408387
		{ &Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature, "OnLoadError__DelegateSignature" }, // 1998000783
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsLoaderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CriFsLoaderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_FilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsLoaderComponent" },
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriFsLoaderComponent, FilePath), METADATA_PARAMS(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsLoaderComponent" },
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadCompleted = { "OnLoadCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriFsLoaderComponent, OnLoadCompleted), Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsLoaderComponent" },
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadError = { "OnLoadError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriFsLoaderComponent, OnLoadError), Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriFsLoaderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriFsLoaderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriFsLoaderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCriFsLoaderComponent_Statics::ClassParams = {
		&UCriFsLoaderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCriFsLoaderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsLoaderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCriFsLoaderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsLoaderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriFsLoaderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCriFsLoaderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriFsLoaderComponent, 2536355075);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriFsLoaderComponent>()
	{
		return UCriFsLoaderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriFsLoaderComponent(Z_Construct_UClass_UCriFsLoaderComponent, &UCriFsLoaderComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriFsLoaderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriFsLoaderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
