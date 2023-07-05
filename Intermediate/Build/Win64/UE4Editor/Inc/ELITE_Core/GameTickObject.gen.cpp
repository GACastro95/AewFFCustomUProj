// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/GameTickObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameTickObject() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UGameTickObject_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UGameTickObject();
	ELITE_CORE_API UClass* Z_Construct_UClass_UCommonObject();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	static FName NAME_UGameTickObject_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UGameTickObject::ReceiveTick(float DeltaSeconds)
	{
		GameTickObject_eventReceiveTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGameTickObject_ReceiveTick),&Parms);
	}
	void UGameTickObject::StaticRegisterNativesUGameTickObject()
	{
	}
	struct Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameTickObject_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameTickObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameTickObject, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(GameTickObject_eventReceiveTick_Parms), Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameTickObject_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameTickObject_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameTickObject_NoRegister()
	{
		return UGameTickObject::StaticClass();
	}
	struct Z_Construct_UClass_UGameTickObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickableWhenPaused_MetaData[];
#endif
		static void NewProp_bTickableWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickableWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickableInEditor_MetaData[];
#endif
		static void NewProp_bTickableInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickableInEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameTickObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameTickObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameTickObject_ReceiveTick, "ReceiveTick" }, // 1788338189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameTickObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameTickObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameTickObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableWhenPaused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameTickObject" },
		{ "ModuleRelativePath", "Public/GameTickObject.h" },
	};
#endif
	void Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableWhenPaused_SetBit(void* Obj)
	{
		((UGameTickObject*)Obj)->bTickableWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableWhenPaused = { "bTickableWhenPaused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameTickObject), &Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameTickObject" },
		{ "ModuleRelativePath", "Public/GameTickObject.h" },
	};
#endif
	void Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableInEditor_SetBit(void* Obj)
	{
		((UGameTickObject*)Obj)->bTickableInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableInEditor = { "bTickableInEditor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameTickObject), &Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableInEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameTickObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameTickObject_Statics::NewProp_bTickableInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameTickObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameTickObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameTickObject_Statics::ClassParams = {
		&UGameTickObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameTickObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameTickObject_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameTickObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameTickObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameTickObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameTickObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameTickObject, 2675250847);
	template<> ELITE_CORE_API UClass* StaticClass<UGameTickObject>()
	{
		return UGameTickObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameTickObject(Z_Construct_UClass_UGameTickObject, &UGameTickObject::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UGameTickObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameTickObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
