// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ActorUtilityFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorUtilityFunctionLibrary() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UActorUtilityFunctionLibrary_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UActorUtilityFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActorUtilityFunctionLibrary::execChangeRootComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(USceneComponent,Z_Param_NewRootComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UActorUtilityFunctionLibrary::ChangeRootComponent(Z_Param_Actor,Z_Param_NewRootComponent);
		P_NATIVE_END;
	}
	void UActorUtilityFunctionLibrary::StaticRegisterNativesUActorUtilityFunctionLibrary()
	{
		UClass* Class = UActorUtilityFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeRootComponent", &UActorUtilityFunctionLibrary::execChangeRootComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics
	{
		struct ActorUtilityFunctionLibrary_eventChangeRootComponent_Parms
		{
			AActor* Actor;
			USceneComponent* NewRootComponent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewRootComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorUtilityFunctionLibrary_eventChangeRootComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::NewProp_NewRootComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::NewProp_NewRootComponent = { "NewRootComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorUtilityFunctionLibrary_eventChangeRootComponent_Parms, NewRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::NewProp_NewRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::NewProp_NewRootComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::NewProp_NewRootComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorUtilityFunctionLibrary, nullptr, "ChangeRootComponent", nullptr, nullptr, sizeof(ActorUtilityFunctionLibrary_eventChangeRootComponent_Parms), Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorUtilityFunctionLibrary_NoRegister()
	{
		return UActorUtilityFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UActorUtilityFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorUtilityFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorUtilityFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorUtilityFunctionLibrary_ChangeRootComponent, "ChangeRootComponent" }, // 3733667359
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorUtilityFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorUtilityFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorUtilityFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorUtilityFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorUtilityFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorUtilityFunctionLibrary_Statics::ClassParams = {
		&UActorUtilityFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorUtilityFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorUtilityFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorUtilityFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorUtilityFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorUtilityFunctionLibrary, 11271636);
	template<> ELITE_CORE_API UClass* StaticClass<UActorUtilityFunctionLibrary>()
	{
		return UActorUtilityFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorUtilityFunctionLibrary(Z_Construct_UClass_UActorUtilityFunctionLibrary, &UActorUtilityFunctionLibrary::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UActorUtilityFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorUtilityFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
