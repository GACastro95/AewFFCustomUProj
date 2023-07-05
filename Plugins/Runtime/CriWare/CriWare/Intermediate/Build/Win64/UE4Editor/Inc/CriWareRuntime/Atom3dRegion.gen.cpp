// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/Atom3dRegion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom3dRegion() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegionHandle_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtom3dRegion::execGetHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtom3dRegionHandle**)Z_Param__Result=P_THIS->GetHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtom3dRegion::execSetHandle)
	{
		P_GET_OBJECT(UAtom3dRegionHandle,Z_Param_InHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandle(Z_Param_InHandle);
		P_NATIVE_END;
	}
	void UAtom3dRegion::StaticRegisterNativesUAtom3dRegion()
	{
		UClass* Class = UAtom3dRegion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandle", &UAtom3dRegion::execGetHandle },
			{ "SetHandle", &UAtom3dRegion::execSetHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics
	{
		struct Atom3dRegion_eventGetHandle_Parms
		{
			UAtom3dRegionHandle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom3dRegion_eventGetHandle_Parms, ReturnValue), Z_Construct_UClass_UAtom3dRegionHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom3dRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtom3dRegion, nullptr, "GetHandle", nullptr, nullptr, sizeof(Atom3dRegion_eventGetHandle_Parms), Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtom3dRegion_GetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics
	{
		struct Atom3dRegion_eventSetHandle_Parms
		{
			UAtom3dRegionHandle* InHandle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom3dRegion_eventSetHandle_Parms, InHandle), Z_Construct_UClass_UAtom3dRegionHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::NewProp_InHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom3dRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtom3dRegion, nullptr, "SetHandle", nullptr, nullptr, sizeof(Atom3dRegion_eventSetHandle_Parms), Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtom3dRegion_SetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister()
	{
		return UAtom3dRegion::StaticClass();
	}
	struct Z_Construct_UClass_UAtom3dRegion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtom3dRegion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtom3dRegion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtom3dRegion_GetHandle, "GetHandle" }, // 2784737027
		{ &Z_Construct_UFunction_UAtom3dRegion_SetHandle, "SetHandle" }, // 3778268767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dRegion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Atom3dRegion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom3dRegion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dRegion_Statics::NewProp_Handle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dRegion" },
		{ "ModuleRelativePath", "Public/Atom3dRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dRegion_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dRegion, Handle), Z_Construct_UClass_UAtom3dRegionHandle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dRegion_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dRegion_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtom3dRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dRegion_Statics::NewProp_Handle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtom3dRegion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtom3dRegion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtom3dRegion_Statics::ClassParams = {
		&UAtom3dRegion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtom3dRegion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dRegion_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtom3dRegion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dRegion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtom3dRegion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtom3dRegion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtom3dRegion, 980835954);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtom3dRegion>()
	{
		return UAtom3dRegion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtom3dRegion(Z_Construct_UClass_UAtom3dRegion, &UAtom3dRegion::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtom3dRegion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtom3dRegion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
